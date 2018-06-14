/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2018 MonetDB B.V.
 */

/*
 * (author) M. Kersten
 * An include file name is also used as library name
 */
#include "monetdb_config.h"
#include "mal_module.h"
#include "mal_linker.h"
#include "mal_function.h"	/* for throw() */
#include "mal_import.h"		/* for slash_2_dir_sep() */
#include "mal_private.h"

#include "mutils.h"
#include <sys/types.h> /* opendir */
#ifdef HAVE_DIRENT_H
#include <dirent.h>
#endif
#ifdef HAVE_FCNTL_H
#include <fcntl.h>
#endif
#include <unistd.h>

#if defined(_MSC_VER) && _MSC_VER >= 1400
#define open _open
#define close _close
#endif

#define MAXMODULES 128

typedef struct{
	str modname;
	str fullname;
	void **handle;
} FileRecord;

static void* lastfile = NULL;

#ifndef O_CLOEXEC
#define O_CLOEXEC 0
#endif

/*
 * returns 1 if the file exists
 */
#ifndef F_OK
#define F_OK 0
#endif
#ifdef _MSC_VER
#define access(f, m)	_access(f, m)
#endif

/* Search for occurrence of the function in the library identified by the filename.  */
MALfcn
getAddress(str fcnname)
{
	void *dl;
	MALfcn adr;

	/* First try the last module loaded */
	if( lastfile != NULL){
		adr = (MALfcn) (intptr_t) dlsym(lastfile, fcnname);
		if( adr != NULL) {
			return adr; /* found it */
		}
		else
			lastfile = NULL;
	}

	/*
	 * Try the program libraries at large or run through all
	 * loaded files and try to resolve the functionname again.
	 *
	 * the first argument must be the same as the base name of the
	 * library that is created in src/tools */
	dl = mdlopen("libmonetdb5", RTLD_NOW | RTLD_GLOBAL);
	if (dl == NULL) 
		return NULL;

	lastfile = dl;
	adr = (MALfcn) (intptr_t) dlsym(dl, fcnname);
	return adr;
}
/*
 * Module file loading
 * The default location to search for the module is in monet_mod_path
 * unless an absolute path is given.
 * Loading further relies on the Linux policy to search for the module
 * location in the following order: 1) the colon-separated list of
 * directories in the user's LD_LIBRARY_PATH, 2) the libraries specified
 * in /etc/ld.so.cache and 3) /usr/lib followed by /lib.
 * If the module contains a routine _init, then that code is executed
 * before the loader returns. Likewise the routine _fini is called just
 * before the module is unloaded.
 *
 * A module loading conflict emerges if a function is redefined.
 * A duplicate load is simply ignored by keeping track of modules
 * already loaded.
 */

str
loadLibrary(str filename, int flag)
{
	(void) filename;
	(void) flag;
	throw(LOADER, "loadLibrary", "Should never be called");
}



/*
 * Handling of Module Library Search Path
 * The plausible locations of the modules can be designated by
 * an environment variable.
 */
static int
cmpstr(const void *_p1, const void *_p2)
{
	const char *p1 = *(char* const*)_p1;
	const char *p2 = *(char* const*)_p2;
	const char *f1 = strrchr(p1, (int) DIR_SEP);
	const char *f2 = strrchr(p2, (int) DIR_SEP);
	return strcmp(f1?f1:p1, f2?f2:p2);
}


#define MAXMULTISCRIPT 48
char *
locate_file(const char *basename, const char *ext, bit recurse)
{
	char *mod_path = GDKgetenv("monet_mod_path");
	char *fullname;
	size_t fullnamelen;
	size_t filelen = strlen(basename) + strlen(ext);
	str strs[MAXMULTISCRIPT]; /* hardwired limit */
	int lasts = 0;

	if (mod_path == NULL)
		return NULL;

	while (*mod_path == PATH_SEP)
		mod_path++;
	if (*mod_path == 0)
		return NULL;
	fullnamelen = 512;
	fullname = GDKmalloc(fullnamelen);
	if (fullname == NULL)
		return NULL;
	while (*mod_path) {
		size_t i;
		char *p;
		int fd;
		DIR *rdir;

		if ((p = strchr(mod_path, PATH_SEP)) != NULL) {
			i = p - mod_path;
		} else {
			i = strlen(mod_path);
		}
		while (i + filelen + 2 > fullnamelen) {
			char *tmp;
			fullnamelen += 512;
			tmp = GDKrealloc(fullname, fullnamelen);
			if (tmp == NULL) {
				GDKfree(fullname);
				return NULL;
			}
			fullname = tmp;
		}
		/* we are now sure the directory name, file
		   base name, extension, and separator fit
		   into fullname, so we don't need to do any
		   extra checks */
		strncpy(fullname, mod_path, i);
		fullname[i] = DIR_SEP;
		strcpy(fullname + i + 1, basename);
		/* see if this is a directory, if so, recurse */
		if (recurse == 1 && (rdir = opendir(fullname)) != NULL) {
			struct dirent *e;
			/* list *ext, sort, return */
			while ((e = readdir(rdir)) != NULL) {
				if (strcmp(e->d_name, "..") == 0 || strcmp(e->d_name, ".") == 0)
					continue;
				if (strcmp(e->d_name + strlen(e->d_name) - strlen(ext), ext) == 0) {
					strs[lasts] = GDKmalloc(strlen(fullname) + sizeof(DIR_SEP)
							+ strlen(e->d_name) + sizeof(PATH_SEP) + 1);
					if (strs[lasts] == NULL) {
						while (lasts >= 0)
							GDKfree(strs[lasts--]);
						GDKfree(fullname);
						(void)closedir(rdir);
						return NULL;
					}
					sprintf(strs[lasts], "%s%c%s%c", fullname, DIR_SEP, e->d_name, PATH_SEP);
					lasts++;
				}
				if (lasts >= MAXMULTISCRIPT)
					break;
			}
			(void)closedir(rdir);
		} else {
			strcat(fullname + i + 1, ext);
			if ((fd = open(fullname, O_RDONLY | O_CLOEXEC)) >= 0) {
				char *tmp;
				close(fd);
				tmp = GDKrealloc(fullname, strlen(fullname) + 1);
				if (tmp == NULL)
					GDKfree(fullname);
				return tmp;
			}
		}
		if ((mod_path = p) == NULL)
			break;
		while (*mod_path == PATH_SEP)
			mod_path++;
	}
	if (lasts > 0) {
		size_t i = 0;
		int c;
		char *tmp;
		/* assure that an ordering such as 10_first, 20_second works */
		qsort(strs, lasts, sizeof(char *), cmpstr);
		for (c = 0; c < lasts; c++)
			i += strlen(strs[c]) + 1; /* PATH_SEP or \0 */
		tmp = GDKrealloc(fullname, i);
		if( tmp == NULL){
			GDKfree(fullname);
			return NULL;
		}
		fullname = tmp;
		i = 0;
		for (c = 0; c < lasts; c++) {
			if (strstr(fullname, strs[c]) == NULL) {
				strcpy(fullname + i, strs[c]);
				i += strlen(strs[c]);
			}
			GDKfree(strs[c]);
		}
		fullname[i - 1] = '\0';
		return fullname;
	}
	/* not found */
	GDKfree(fullname);
	return NULL;
}

char *
MSP_locate_script(const char *filename)
{
	return locate_file(filename, MAL_EXT, 1);
}

char *
MSP_locate_sqlscript(const char *filename, bit recurse)
{
	/* no directory semantics (yet) */
	return locate_file(filename, SQL_EXT, recurse);
}


int
malLibraryEnabled(str name) {
	if (strcmp(name, "pyapi") == 0) {
		char *val = GDKgetenv("embedded_py");
		if (val && (strcasecmp(val, "2") == 0 || GDKgetenv_istrue("embedded_py") || GDKgetenv_istrue("embedded_py"))) {
			return true;
		}
		return false;
	} else if (strcmp(name, "pyapi3") == 0) {
		char *val = GDKgetenv("embedded_py");
		if (val && strcasecmp(val, "3") == 0) {
			return true;
		}
		return false;
	}
	return true;
}

char*
malLibraryHowToEnable(str name) {
	if (strcmp(name, "pyapi") == 0) {
		return "Embedded Python 2 has not been enabled. Start server with --set embedded_py=2";
	}
	if (strcmp(name, "pyapi3") == 0) {
		return "Embedded Python 3 has not been enabled. Start server with --set embedded_py=3";
	}
	return "";
}
