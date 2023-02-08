/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 14:46 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: test get front
 */

#include "vector.h"

Test(vector_get_front, normal) {
    size_t el_size;
    size_t in_capa;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};

    el_size = sizeof(int);
    in_capa = 5;
    ve = stu_vector_new(el_size, in_capa);
    stu_memcpy(ve->vec, i, el_size * in_capa);
    cr_assert_eq(stu_vector_get_front(ve->vec), 1);
    free(ve->vec);
    free(ve);
}

