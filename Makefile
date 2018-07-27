OPTIMIZE=$(OPT)
ifneq ($(OPTIMIZE), true)
	OPTFLAGS=-g -Wall -Wextra -Werror
	OBJDIR=build/debug
else
	OPTFLAGS=-O2
	OBJDIR=build/optimized
endif

DEPSDIR=$(OBJDIR)/deps

CFLAGS=-DLIBGDK -DLIBMAL -DLIBOPTIMIZER -DLIBSTREAM -DLIBSQL -std=c99
LDFLAGS=-lm
INCLUDE_FLAGS= -Isrc/ -Isrc/common  \
-Isrc/embedded -Isrc/gdk \
-Isrc/mal/mal -Isrc/mal/modules -Isrc/mal/optimizer -Isrc/mal/sqlbackend \
-Isrc/sql/include -Isrc/sql/common -Isrc/sql/server -Isrc/sql/storage -Isrc/sql/storage/bat

SOEXT=so
		
ifeq ($(OS),Windows_NT)
	SOEXT=dll
	LDFLAGS += -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive
	CFLAGS += -Wno-attributes -Wno-format
	CC=gcc
else
    UNAME_S := $(shell uname -s)
    CFLAGS += -fPIC
    LDFLAGS += -ldl -lpthread
    ifeq ($(UNAME_S),Linux)
		LDFLAGS += -lrt
    endif
    ifeq ($(UNAME_S),Darwin)
		SOEXT=dylib
    endif
endif


SQLSCRIPTS=\
src/sql/scripts/09_like.sql \
src/sql/scripts/10_math.sql \
src/sql/scripts/11_times.sql \
src/sql/scripts/13_date.sql \
src/sql/scripts/15_querylog.sql \
src/sql/scripts/16_tracelog.sql \
src/sql/scripts/17_temporal.sql \
src/sql/scripts/18_index.sql \
src/sql/scripts/20_vacuum.sql \
src/sql/scripts/21_dependency_functions.sql \
src/sql/scripts/21_dependency_views.sql \
src/sql/scripts/22_clients.sql \
src/sql/scripts/25_debug.sql \
src/sql/scripts/26_sysmon.sql \
src/sql/scripts/27_rejects.sql \
src/sql/scripts/39_analytics.sql \
src/sql/scripts/41_md5sum.sql \
src/sql/scripts/51_sys_schema_extension.sql \
src/sql/scripts/75_storagemodel.sql \
src/sql/scripts/80_statistics.sql \
src/sql/scripts/99_system.sql

MALSCRIPTS=\
src/mal/modules/aggr.mal \
src/mal/modules/algebra.mal \
src/mal/modules/bat5.mal \
src/mal/modules/batExtensions.mal \
src/mal/modules/batmmath.mal \
src/mal/modules/batmtime.mal \
src/mal/modules/batstr.mal \
src/mal/modules/blob.mal \
src/mal/modules/group.mal \
src/mal/modules/iterator.mal \
src/mal/modules/language.mal \
src/mal/modules/mal_init.mal \
src/mal/modules/manifold.mal \
src/mal/modules/mat.mal \
src/mal/modules/mkey.mal \
src/mal/modules/mmath.mal \
src/mal/modules/mtime.mal \
src/mal/modules/orderidx.mal \
src/mal/modules/pcre.mal \
src/mal/modules/sample.mal \
src/mal/modules/str.mal \
src/mal/modules/tablet.mal \
src/mal/optimizer/optimizer.mal \
src/mal/sqlbackend/sql.mal \
src/mal/sqlbackend/sql_aggr_bte.mal \
src/mal/sqlbackend/sql_aggr_dbl.mal \
src/mal/sqlbackend/sql_aggr_flt.mal \
src/mal/sqlbackend/sql_aggr_int.mal \
src/mal/sqlbackend/sql_aggr_lng.mal \
src/mal/sqlbackend/sql_aggr_sht.mal \
src/mal/sqlbackend/sql_decimal.mal \
src/mal/sqlbackend/sql_inspect.mal \
src/mal/sqlbackend/sql_rank.mal \
src/mal/sqlbackend/sql_transaction.mal \
src/mal/sqlbackend/sqlcatalog.mal

MALAUTO=\
src/mal/modules/01_batcalc.mal \
src/mal/modules/01_calc.mal \
src/mal/sqlbackend/40_sql.mal 

COBJECTS=\
$(OBJDIR)/common/stream.o \
$(OBJDIR)/common/mutils.o \
$(OBJDIR)/embedded/embedded.o \
$(OBJDIR)/gdk/gdk_aggr.o \
$(OBJDIR)/gdk/gdk_align.o \
$(OBJDIR)/gdk/gdk_atoms.o \
$(OBJDIR)/gdk/gdk_bat.o \
$(OBJDIR)/gdk/gdk_batop.o \
$(OBJDIR)/gdk/gdk_bbp.o \
$(OBJDIR)/gdk/gdk_calc.o \
$(OBJDIR)/gdk/gdk_cross.o \
$(OBJDIR)/gdk/gdk_delta.o \
$(OBJDIR)/gdk/gdk_firstn.o \
$(OBJDIR)/gdk/gdk_group.o \
$(OBJDIR)/gdk/gdk_hash.o \
$(OBJDIR)/gdk/gdk_heap.o \
$(OBJDIR)/gdk/gdk_imprints.o \
$(OBJDIR)/gdk/gdk_join.o \
$(OBJDIR)/gdk/gdk_logger.o \
$(OBJDIR)/gdk/gdk_orderidx.o \
$(OBJDIR)/gdk/gdk_posix.o \
$(OBJDIR)/gdk/gdk_project.o \
$(OBJDIR)/gdk/gdk_qsort.o \
$(OBJDIR)/gdk/gdk_sample.o \
$(OBJDIR)/gdk/gdk_search.o \
$(OBJDIR)/gdk/gdk_select.o \
$(OBJDIR)/gdk/gdk_ssort.o \
$(OBJDIR)/gdk/gdk_storage.o \
$(OBJDIR)/gdk/gdk_system.o \
$(OBJDIR)/gdk/gdk_tm.o \
$(OBJDIR)/gdk/gdk_unique.o \
$(OBJDIR)/gdk/gdk_utils.o \
$(OBJDIR)/gdk/gdk_value.o \
$(OBJDIR)/mal/mal/mal.o \
$(OBJDIR)/mal/mal/mal_atom.o \
$(OBJDIR)/mal/mal/mal_builder.o \
$(OBJDIR)/mal/mal/mal_client.o \
$(OBJDIR)/mal/mal/mal_dataflow.o \
$(OBJDIR)/mal/mal/mal_exception.o \
$(OBJDIR)/mal/mal/mal_function.o \
$(OBJDIR)/mal/mal/mal_import.o \
$(OBJDIR)/mal/mal/mal_instruction.o \
$(OBJDIR)/mal/mal/mal_interpreter.o \
$(OBJDIR)/mal/mal/mal_linker.o \
$(OBJDIR)/mal/mal/mal_listing.o \
$(OBJDIR)/mal/mal/mal_module.o \
$(OBJDIR)/mal/mal/mal_namespace.o \
$(OBJDIR)/mal/mal/mal_parser.o \
$(OBJDIR)/mal/mal/mal_resolve.o \
$(OBJDIR)/mal/mal/mal_runtime.o \
$(OBJDIR)/mal/mal/mal_scenario.o \
$(OBJDIR)/mal/mal/mal_session.o \
$(OBJDIR)/mal/mal/mal_stack.o \
$(OBJDIR)/mal/mal/mal_type.o \
$(OBJDIR)/mal/mal/mal_utils.o \
$(OBJDIR)/mal/modules/aggr.o \
$(OBJDIR)/mal/modules/algebra.o \
$(OBJDIR)/mal/modules/bat5.o \
$(OBJDIR)/mal/modules/batcalc.o \
$(OBJDIR)/mal/modules/batExtensions.o \
$(OBJDIR)/mal/modules/batmmath.o \
$(OBJDIR)/mal/modules/batstr.o \
$(OBJDIR)/mal/modules/blob.o \
$(OBJDIR)/mal/modules/calc.o \
$(OBJDIR)/mal/modules/group.o \
$(OBJDIR)/mal/modules/iterator.o \
$(OBJDIR)/mal/modules/language.o \
$(OBJDIR)/mal/modules/manifold.o \
$(OBJDIR)/mal/modules/mat.o \
$(OBJDIR)/mal/modules/mkey.o \
$(OBJDIR)/mal/modules/mmath.o \
$(OBJDIR)/mal/modules/mtime.o \
$(OBJDIR)/mal/modules/orderidx.o \
$(OBJDIR)/mal/modules/pcre.o \
$(OBJDIR)/mal/modules/projectionpath.o \
$(OBJDIR)/mal/modules/sample.o \
$(OBJDIR)/mal/modules/str.o \
$(OBJDIR)/mal/modules/tablet.o \
$(OBJDIR)/mal/optimizer/opt_aliases.o \
$(OBJDIR)/mal/optimizer/opt_candidates.o \
$(OBJDIR)/mal/optimizer/opt_coercion.o \
$(OBJDIR)/mal/optimizer/opt_commonTerms.o \
$(OBJDIR)/mal/optimizer/opt_constants.o \
$(OBJDIR)/mal/optimizer/opt_costModel.o \
$(OBJDIR)/mal/optimizer/opt_dataflow.o \
$(OBJDIR)/mal/optimizer/opt_deadcode.o \
$(OBJDIR)/mal/optimizer/opt_emptybind.o \
$(OBJDIR)/mal/optimizer/opt_evaluate.o \
$(OBJDIR)/mal/optimizer/opt_garbageCollector.o \
$(OBJDIR)/mal/optimizer/opt_generator.o \
$(OBJDIR)/mal/optimizer/opt_inline.o \
$(OBJDIR)/mal/optimizer/opt_macro.o \
$(OBJDIR)/mal/optimizer/opt_matpack.o \
$(OBJDIR)/mal/optimizer/opt_mergetable.o \
$(OBJDIR)/mal/optimizer/opt_mitosis.o \
$(OBJDIR)/mal/optimizer/opt_multiplex.o \
$(OBJDIR)/mal/optimizer/opt_pipes.o \
$(OBJDIR)/mal/optimizer/opt_prelude.o \
$(OBJDIR)/mal/optimizer/opt_profiler.o \
$(OBJDIR)/mal/optimizer/opt_projectionpath.o \
$(OBJDIR)/mal/optimizer/opt_pushselect.o \
$(OBJDIR)/mal/optimizer/opt_remap.o \
$(OBJDIR)/mal/optimizer/opt_reorder.o \
$(OBJDIR)/mal/optimizer/opt_support.o \
$(OBJDIR)/mal/optimizer/opt_wrapper.o \
$(OBJDIR)/mal/optimizer/optimizer.o \
$(OBJDIR)/mal/sqlbackend/mal_backend.o \
$(OBJDIR)/mal/sqlbackend/rel_bin.o \
$(OBJDIR)/mal/sqlbackend/sql.o \
$(OBJDIR)/mal/sqlbackend/sql_assert.o \
$(OBJDIR)/mal/sqlbackend/sql_bat2time.o \
$(OBJDIR)/mal/sqlbackend/sql_cast.o \
$(OBJDIR)/mal/sqlbackend/sql_cat.o \
$(OBJDIR)/mal/sqlbackend/sql_execute.o \
$(OBJDIR)/mal/sqlbackend/sql_fround.o \
$(OBJDIR)/mal/sqlbackend/sql_gencode.o \
$(OBJDIR)/mal/sqlbackend/sql_optimizer.o \
$(OBJDIR)/mal/sqlbackend/sql_orderidx.o \
$(OBJDIR)/mal/sqlbackend/sql_rank.o \
$(OBJDIR)/mal/sqlbackend/sql_result.o \
$(OBJDIR)/mal/sqlbackend/sql_round.o \
$(OBJDIR)/mal/sqlbackend/sql_scenario.o \
$(OBJDIR)/mal/sqlbackend/sql_statement.o \
$(OBJDIR)/mal/sqlbackend/sql_statistics.o \
$(OBJDIR)/mal/sqlbackend/sql_transaction.o \
$(OBJDIR)/mal/sqlbackend/sql_upgrades.o \
$(OBJDIR)/mal/sqlbackend/sql_user.o \
$(OBJDIR)/sql/common/sql_backend.o \
$(OBJDIR)/sql/common/sql_changeset.o \
$(OBJDIR)/sql/common/sql_hash.o \
$(OBJDIR)/sql/common/sql_keyword.o \
$(OBJDIR)/sql/common/sql_list.o \
$(OBJDIR)/sql/common/sql_mem.o \
$(OBJDIR)/sql/common/sql_stack.o \
$(OBJDIR)/sql/common/sql_string.o \
$(OBJDIR)/sql/common/sql_types.o \
$(OBJDIR)/sql/server/rel_distribute.o \
$(OBJDIR)/sql/server/rel_dump.o \
$(OBJDIR)/sql/server/rel_exp.o \
$(OBJDIR)/sql/server/rel_optimizer.o \
$(OBJDIR)/sql/server/rel_partition.o \
$(OBJDIR)/sql/server/rel_planner.o \
$(OBJDIR)/sql/server/rel_prop.o \
$(OBJDIR)/sql/server/rel_psm.o \
$(OBJDIR)/sql/server/rel_rel.o \
$(OBJDIR)/sql/server/rel_remote.o \
$(OBJDIR)/sql/server/rel_schema.o \
$(OBJDIR)/sql/server/rel_select.o \
$(OBJDIR)/sql/server/rel_semantic.o \
$(OBJDIR)/sql/server/rel_sequence.o \
$(OBJDIR)/sql/server/rel_trans.o \
$(OBJDIR)/sql/server/rel_updates.o \
$(OBJDIR)/sql/server/rel_xml.o \
$(OBJDIR)/sql/server/sql_atom.o \
$(OBJDIR)/sql/server/sql_datetime.o \
$(OBJDIR)/sql/server/sql_decimal.o \
$(OBJDIR)/sql/server/sql_env.o \
$(OBJDIR)/sql/server/sql_mvc.o \
$(OBJDIR)/sql/server/sql_parser.tab.o \
$(OBJDIR)/sql/server/sql_privileges.o \
$(OBJDIR)/sql/server/sql_qc.o \
$(OBJDIR)/sql/server/sql_scan.o \
$(OBJDIR)/sql/server/sql_semantic.o \
$(OBJDIR)/sql/server/sql_symbol.o \
$(OBJDIR)/sql/storage/bat/bat_logger.o \
$(OBJDIR)/sql/storage/bat/bat_storage.o \
$(OBJDIR)/sql/storage/bat/bat_table.o \
$(OBJDIR)/sql/storage/bat/bat_utils.o \
$(OBJDIR)/sql/storage/bat/nop_logger.o \
$(OBJDIR)/sql/storage/bat/res_table.o \
$(OBJDIR)/sql/storage/sql_catalog.o \
$(OBJDIR)/sql/storage/store.o \
$(OBJDIR)/sql/storage/store_dependency.o \
$(OBJDIR)/sql/storage/store_sequence.o


ODIRS=$(dir $(COBJECTS))
DDIRS=$(subst $(OBJDIR), $(DEPSDIR), $(ODIRS))
$(shell mkdir -p $(ODIRS) $(DDIRS))

LIBFILE=build/libmonetdb5.$(SOEXT)

.PHONY: all clean test init test $(LIBFILE)

all: $(COBJECTS) $(LIBFILE)


clean:
	rm -rf build

	
sqlparser: src/sql/server/sql_parser.h src/sql/server/sql_parser.y
	bison -b src/sql/server/sql_parser -y  -d -p sql -r all src/sql/server/sql_parser.y
	rm src/sql/server/sql_parser.output

inlines: $(MALSCRIPTS) $(SQLSCRIPTS)
	rm -rf build/inlines
	mkdir -p build/inlines/createdb
	mkdir -p build/inlines/autoload
	cp $(MALSCRIPTS)  build/inlines
	cp $(MALAUTO)     build/inlines/autoload
	cp $(SQLSCRIPTS)  build/inlines/createdb
	python src/embedded/inlined_scripts.py build/inlines/ ../../src/embedded/inlined_scripts.c
 	
 
init: sqlparser inlines

test: $(LIBFILE)
	mkdir -p build/tests 
	$(CC) $(OPTFLAGS) tests/readme/readme.c -o build/test_readme -Isrc/embedded -Lbuild -lmonetdb5 $(LDFLAGS)
		$(CC) $(OPTFLAGS) tests/tpchq1/test1.c -o build/test_tpchq1 -Isrc/embedded -Lbuild -lmonetdb5 $(LDFLAGS)
	$(CC) $(OPTFLAGS) tests/sqlitelogic/sqllogictest.c tests/sqlitelogic/md5.c -o build/test_sqlitelogic -Itests/sqlitelogic -Isrc/embedded -Lbuild -lmonetdb5 $(LDFLAGS)
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_readme
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_tpchq1 $(shell pwd)/tests/tpchq1
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_sqlitelogic  --engine MonetDBLite --halt --verify tests/sqlitelogic/select1.test
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_sqlitelogic  --engine MonetDBLite --halt --verify tests/sqlitelogic/select2.test
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_sqlitelogic  --engine MonetDBLite --halt --verify tests/sqlitelogic/select3.test
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_sqlitelogic  --engine MonetDBLite --halt --verify tests/sqlitelogic/select4.test
	LD_LIBRARY_PATH=build/ DYLD_LIBRARY_PATH=build/ ./build/test_sqlitelogic  --engine MonetDBLite --halt --verify tests/sqlitelogic/select5.test
	

DEPS = $(shell find $(DEPSDIR) -name "*.d")
-include $(DEPS)


$(OBJDIR)/%.o: src/%.c
	$(CC) $(CFLAGS) -DMONETDBLITE_COMPILE -MMD -MF $(subst $(OBJDIR),$(DEPSDIR),$(subst .o,.d,$@)) $(INCLUDE_FLAGS) $(OPTFLAGS) -c $(subst $(OBJDIR)/,src/,$(subst .o,.c,$@)) -o $@

$(LIBFILE): $(COBJECTS) 
	$(CC) $(LDFLAGS) $(COBJECTS) $(OPTFLAGS) -o $(LIBFILE) -shared
