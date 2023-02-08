/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-06 - 15:19 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector get an element at
 */

#include <stddef.h>
#include "vector.h"

void *stu_vector_get_at(const stu_vector_t *ve, size_t pos)
{
    size_t index;

    index = pos * ve->elem_size;
    if (ve->used_capa == 0) {
        return NULL;
    }
    if (pos > (ve->used_capa - 1)) {
        return NULL;
    }
    return (&((char *)ve->vec)[index]);
}
