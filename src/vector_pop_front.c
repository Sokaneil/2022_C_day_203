/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 09:48 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector pop front
 */

#include "vector.h"

void stu_vector_pop_front(stu_vector_t *ve)
{
    if (ve->capacity == 0) {
        return ;
    }
    stu_memmove(ve->vec, ve->vec + ve->elem_size, ve->total);
    ve->total -= ve->elem_size;
    ve->used_capa -= 1;
}
