/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-06 - 14:34 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector pop back
 */

#include "vector.h"

void stu_vector_pop_back(stu_vector_t *ve)
{
    ve->used_capa -= 1;
    ve->total -= ve->elem_size;
}
