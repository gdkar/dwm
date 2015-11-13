/* See LICENSE file for copyright and license details. */

#include <stdint.h>
#include <stdarg.h>

#define MAX(A, B) \
    ({ __typeof__(A) __UTIL_MAX_A = (A); \
       __typeof__(B) __UTIL_MAX_B = (B); \
       (__UTIL_MAX_A < __UTIL_MAX_B) ? __UTIL_MAX_B : __UTIL_MAX_A;\
     })
#define MIN(A, B) \
    ({ __typeof__(A) __UTIL_MIN_A = (A); \
       __typeof__(B) __UTIL_MIN_B = (B); \
       (__UTIL_MIN_A > __UTIL_MIN_B) ? __UTIL_MIN_B : __UTIL_MIN_A;\
     })
#define BETWEEN(X, A, B) \
    ({ __typeof__(X) __UTIL_BETWEEN_X = (X); \
       __UTIL_BETWEEN_X <= (B) && (A) <= __UTIL_BETWEEN_X;\
     })

void die(const char *errstr, ...);
void *ecalloc(size_t, size_t);
