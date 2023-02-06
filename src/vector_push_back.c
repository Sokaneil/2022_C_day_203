 /*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-02 - 09:20 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: push back vector
 */

#include "vector.h"

void *stu_vector_push_back(stu_vector_t *ve, void *elem)
{
    if (ve->used_capa == ve->capacity) {
        vec_realloc(ve);
    }
    stu_memcpy(ve->vec + (ve->total), elem, ve->elem_size);
    ve->total += ve->elem_size;
    ve->used_capa += 1;
    return (ve->vec);
}
