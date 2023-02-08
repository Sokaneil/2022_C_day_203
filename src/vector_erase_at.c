/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 11:28 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector erase at
 */

#include "vector.h"

void stu_vector_erase_at(stu_vector_t *ve, size_t pos)
{
    if (pos > ve->capacity - 1) {
        return ;
    }
    stu_memmove(ve->vec + (pos * ve->elem_size),
                ve->vec + ((pos + 1) * ve->elem_size),
                ve->total - (pos * ve->elem_size));
    ve->total -= ve->elem_size;
    ve->used_capa -= 1;
}
