# ZWSQL Derivation and Copyright Notice

## Summary

**ZWSQL** is a derivative database management system based on
[PostgreSQL](https://www.postgresql.org/). This document describes the
relationship between ZWSQL and PostgreSQL, the scope of ZWSQL-specific
copyright, and how licensing applies to this distribution.

## Lineage

| Item | Detail |
|------|--------|
| Upstream project | PostgreSQL Database Management System |
| ZWSQL status | Derivative work; not an official PostgreSQL release |
| Upstream license | PostgreSQL License (BSD-style); see [COPYRIGHT](COPYRIGHT) |
| This distribution | ZWSQL source tree, including upstream PostgreSQL code plus ZWSQL-specific changes |

ZWSQL retains the PostgreSQL codebase structure and compatibility goals
where practical, while adding capabilities documented in the project
roadmap (deep relational optimization, spatial enhancements, industrial 3D
features, and related work).

## Copyright

### PostgreSQL (unchanged)

The following copyright holders and terms for PostgreSQL remain applicable
to all portions of this distribution that originate from or remain under
PostgreSQL authorship:

- Portions Copyright (c) 1996-2026, PostgreSQL Global Development Group
- Portions Copyright (c) 1994, The Regents of the University of California

The full PostgreSQL license text is preserved without modification in
[COPYRIGHT](COPYRIGHT), following the ZWSQL notice at the top of that file.

### ZWSQL (additional)

The following applies to **ZWSQL-specific** material in this distribution,
including but not limited to:

- New or substantially modified source files introduced for ZWSQL
- ZWSQL-specific documentation (including this file)
- ZWSQL branding, compatibility layers, and extension modules added under the ZWSQL project

**Copyright (c) 2026, ZWSQL Project Contributors**

All rights reserved where not already licensed under the terms below.

## Licensing

1. **PostgreSQL portions:** Subject to the PostgreSQL License reproduced in
   [COPYRIGHT](COPYRIGHT). You must retain the PostgreSQL copyright notice
   and license paragraphs in all copies as required by that license.

2. **ZWSQL-specific portions:** Unless a file states otherwise, ZWSQL-specific
   contributions in this distribution are offered under the **same**
   PostgreSQL License (BSD-style) for consistency and to keep redistribution
   terms clear. When in doubt, treat the combined work as governed by the
   PostgreSQL License and retain both the PostgreSQL and ZWSQL copyright
   notices.

3. **No relicensing of upstream:** ZWSQL does not replace or narrow the
   PostgreSQL license for upstream code. Third-party and PostgreSQL
   Global Development Group copyrights in individual files, where present,
   remain as stated in those files.

4. **Trademarks:** "PostgreSQL" and related marks are property of their
   respective owners. "ZWSQL" identifies this derivative project and is not
   affiliated with or endorsed by the PostgreSQL Global Development Group
   unless separately stated.

## Redistribution

When you distribute source or binaries from this tree:

- Include [COPYRIGHT](COPYRIGHT) (which contains both the ZWSQL notice and
  the complete PostgreSQL license).
- Retain per-file copyright headers where they exist.
- Do not remove PostgreSQL copyright or license text from upstream-derived
  files.

## Upstream synchronization

ZWSQL is intended to remain mergeable with upstream PostgreSQL over time.
Changes should be layered where possible (overlay modules, compatibility
headers, documentation) to reduce divergence cost. Future project documents
may describe sync policy in more detail.

## Contact and attribution

If you contribute to ZWSQL, ensure your changes are documented and that
copyright notices are updated in accordance with this file and [COPYRIGHT](COPYRIGHT).
Replace "ZWSQL Project Contributors" with a specific legal entity in
[COPYRIGHT](COPYRIGHT) and in this section when your organization assumes
maintainership.
