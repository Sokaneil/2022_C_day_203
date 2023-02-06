/*
 * E89 Pedagogical & Technical Lab
 * project:     vectors
 * created on:  2023-02-06 - 09:34 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: test
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "vector.h"

Test(push_back, realloc) {
    size_t el_size;
    size_t in_capa;
    stu_vector_t *ve;
    int i[5] = {1, 2, 456, 78, 54};
    int j[7] = {1, 2, 456, 78, 54, 32, 64};
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
    stu_vector_push_back(ve, &k);
    stu_vector_push_back(ve, &l);
    cr_assert(eq(int[7], ve->vec, j));
    free(ve->vec);
    free(ve);
}

Test(push_back, normal) {
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
    stu_vector_push_back(ve, &k);
    cr_assert(eq(int[6], ve->vec, j));
    free(ve->vec);
    free(ve);
}
