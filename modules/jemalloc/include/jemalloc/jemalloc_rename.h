/*
 * Name mangling for public symbols is controlled by --with-mangling and
 * --with-jemalloc-prefix.  With default settings the je_ prefix is stripped by
 * these macro definitions.
 */
#ifndef JEMALLOC_NO_RENAME
#  define je_malloc_conf jem_malloc_conf
#  define je_malloc_message jem_malloc_message
#  define je_malloc jem_malloc
#  define je_calloc jem_calloc
#  define je_posix_memalign jem_posix_memalign
#  define je_aligned_alloc jem_aligned_alloc
#  define je_realloc jem_realloc
#  define je_free jem_free
#  define je_mallocx jem_mallocx
#  define je_rallocx jem_rallocx
#  define je_xallocx jem_xallocx
#  define je_sallocx jem_sallocx
#  define je_dallocx jem_dallocx
#  define je_sdallocx jem_sdallocx
#  define je_nallocx jem_nallocx
#  define je_mallctl jem_mallctl
#  define je_mallctlnametomib jem_mallctlnametomib
#  define je_mallctlbymib jem_mallctlbymib
#  define je_malloc_stats_print jem_malloc_stats_print
#  define je_malloc_usable_size jem_malloc_usable_size
#  define je_memalign jem_memalign
#  define je_valloc jem_valloc
#endif
