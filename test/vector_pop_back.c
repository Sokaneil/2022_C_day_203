/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 11:51 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: test pop back
 */

#include "vector.h"

Test(pop_back, normal) {
    size_t el_size;
    size_t in_capa;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};
    int j[4] = {1, 2, 456, 78};

    el_size = sizeof(int);
    in_capa = 6;
    ve = stu_vector_new(el_size, in_capa);
    ve->used_capa = 5;
    ve->total = el_size * ve->used_capa;
    stu_memcpy(ve->vec, i, ve->total);
    stu_vector_pop_back(ve);
    cr_assert(eq(int[4], ve->vec, j));
    free(ve->vec);
    free(ve);
}
