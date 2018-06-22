library(testthat)
library(DBI)

versions <- c("0.5.0", "0.5.1")

test_that("we can upgrade old dbs", {
	skip_on_os("windows")
	for (v in versions) {
		message(v)
		dbfile <- sprintf("oldfarm-%s.zip", v)
		uf <- file.path(tempdir(), "upgradetestfarm")
		unzip(dbfile, exdir=uf)
		dbfolder <- list.files(uf, full.names=T)[[1]]
		con <- dbConnect(MonetDBLite::MonetDBLite(), dbfolder)
		expect_true(dbExistsTable(con, "iris"))
		res <- dbReadTable(con, "iris")
		res$Species <- as.factor(res$Species)
		expect_equal(res, iris)
		dbDisconnect(con, shutdown=T)
		# start again because it might crash on shutdown
		con <- dbConnect(MonetDBLite::MonetDBLite(), dbfolder)
		dbDisconnect(con, shutdown=T)
	}
})

create <- function(v) {
	devtools::install_version("MonetDBLite", version = v, repos = "https://cloud.r-project.org/")
	con <- dbConnect(MonetDBLite::MonetDBLite(), v)
	dbWriteTable(con, "iris", iris)
	dbDisconnect(con, shutdown=T)

	dbfile <- sprintf("oldfarm-%s.zip", v)
	zip(dbfile, v)
}
