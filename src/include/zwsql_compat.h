/*-------------------------------------------------------------------------
 *
 * zwsql_compat.h
 *	  ZWSQL branding and display-only compatibility macros.
 *
 * This header centralizes user-visible product naming.  It does not rename
 * internal PostgreSQL symbols, directories, or C identifiers.
 *
 * Portions Copyright (c) 2026, ZWSQL Project Contributors
 *
 * src/include/zwsql_compat.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef ZWSQL_COMPAT_H
#define ZWSQL_COMPAT_H

/*
 * User-visible product name (version strings, Windows event log, module ABI
 * tags, and similar).  Requires pg_config.h (PG_VERSION, PG_VERSION_STR).
 */
#define ZWSQL_PRODUCT_NAME		"ZWSQL"

/* Full configure-time version string, e.g. "ZWSQL 18.4 on ...". */
#define ZWSQL_VERSION_STR		PG_VERSION_STR

/* Short version number string from configure, e.g. "18.4". */
#define ZWSQL_VERSION			PG_VERSION

/*
 * First line printed by the postgres/postmaster binary for -V/--version.
 * The executable name remains "postgres" for compatibility.
 */
#define ZWSQL_BACKEND_VERSIONSTR \
	"postgres (" ZWSQL_PRODUCT_NAME ") " PG_VERSION "\n"

#ifndef PG_BACKEND_VERSIONSTR
#define PG_BACKEND_VERSIONSTR	ZWSQL_BACKEND_VERSIONSTR
#endif

#endif							/* ZWSQL_COMPAT_H */
