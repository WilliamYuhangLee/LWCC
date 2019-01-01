/**
 * Created by William Lee on 1/1/19.
 */

#ifndef LWCC_UTIL_H
#define LWCC_UTIL_H

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

typedef char *string;
string String(char *);

void *checked_malloc(size_t);

#endif //LWCC_UTIL_H
