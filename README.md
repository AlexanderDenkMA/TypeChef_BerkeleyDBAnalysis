## Setup for TypeChef analysis of Vim

the vim setup is somewhat complicated because
vim massively rewrites macros in header.h and
vim.h.

Many other macros are controlled by FEAT_BIG, FEAT_NORMAL, FEAT_HUGE and so forth which makes conditions huge and parsing slow. Several macros also cannot be activated separately but are only derived from other macros (should be undefined by default).

There seem to be no entirely clear naming convention for features. Started with FEAT_ prefix for now.
Deactivated several GUI features because they require different header files not currently present here.

