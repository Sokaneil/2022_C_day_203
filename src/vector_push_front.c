/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-07 - 16:42 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector push front
 */

#include "vector.h"

void *stu_vector_push_front(stu_vector_t *ve, void *elem)
{
    if (ve->used_capa == ve->capacity) {
        vec_realloc(ve);
    }
    stu_memmove(ve->vec + ve->elem_size, ve->vec, ve->total);
    stu_memcpy(ve->vec, elem, ve->elem_size);
    ve->total += ve->elem_size;
    ve->used_capa += 1;
    return (ve->vec);
}
