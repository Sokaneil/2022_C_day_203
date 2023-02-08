/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 14:46 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: test get at
 */

#include "vector.h"

Test(vector_get_at, normal) {
    size_t el_size;
    size_t in_capa;
    size_t pos;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};

    pos = 3;
    el_size = sizeof(int);
    in_capa = 5;
    ve = stu_vector_new(el_size, in_capa);
    stu_memcpy(ve->vec, i, el_size * in_capa);
    ve->used_capa = 5;
    ve->total = ve->used_capa * el_size;
    cr_assert_eq(stu_vector_get_at(ve, pos), ve->vec + (pos * el_size));
    free(ve->vec);
    free(ve);
}
