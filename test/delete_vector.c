/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 14:39 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: delete vector
 */

#include "vector.h"

Test(delete_vector, normal) {
    size_t el_size;
    size_t in_capa;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};

    el_size = sizeof(int);
    in_capa = 5;
    ve = stu_vector_new(el_size, in_capa);
    stu_memcpy(ve->vec, i, el_size * in_capa);
    cr_assert(eq(int[5], ve->vec, i));
    stu_vector_delete(ve);
}
