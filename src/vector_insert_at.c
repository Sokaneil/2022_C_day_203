/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-07 - 11:40 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: insert at
 */

#include "vector.h"

void *stu_vector_insert_at(stu_vector_t *ve, size_t pos, void *elem)
{
    if (pos > (ve->capacity - 1)) {
        return NULL;
    }
    if (ve->used_capa == ve->capacity) {
        vec_realloc(ve);
    }
    stu_memmove(ve->vec + ((pos + 1) * ve->elem_size),
                ve->vec + (pos * ve->elem_size),
                ve->total - (pos * ve->elem_size));
    stu_memcpy(ve->vec + (pos * ve->elem_size), elem, ve->elem_size);
    ve->total += ve->elem_size;
    ve->used_capa += 1;
    return (ve->vec);
}
