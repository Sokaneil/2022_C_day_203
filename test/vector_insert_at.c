/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-08 - 10:42 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: test insert at
 */

#include "vector.h"

Test(insert_at, realloc) {
    size_t el_size;
    size_t in_capa;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};
    int j[7] = {1, 64, 2, 456, 32, 78, 54};
    //int q[6] = {1, 2, 456, 32, 78, 54};
    int k;
    int l;

    k = 32;
    l = 64;
    el_size = sizeof(int);
    in_capa = 5;
    ve = stu_vector_new(el_size, in_capa);
    stu_memcpy(ve->vec, i, el_size * in_capa);
    ve->used_capa = 5;
    ve->total = el_size * in_capa;
    cr_assert(eq(int[5], ve->vec, i));
    stu_vector_insert_at(ve, 3, &k);
    //cr_assert(eq(int[6], ve->vec, q));
    stu_vector_insert_at(ve, 1, &l);
    cr_assert(eq(int[7], ve->vec, j));
    free(ve->vec);
    free(ve);
}
Test(insert_at, normal) {
    size_t el_size;
    size_t in_capa;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};
    int j[6] = {1, 2, 456, 78, 54, 32};
    int k;

    k = 32;
    el_size = sizeof(int);
    in_capa = 6;
    ve = stu_vector_new(el_size, in_capa);
    ve->used_capa = 5;
    ve->total = el_size * ve->used_capa;
    stu_memcpy(ve->vec, i, ve->total);
    stu_vector_insert_at(ve, 5, &k);
    cr_assert(eq(int[6], ve->vec, j));
    free(ve->vec);
    free(ve);
}
