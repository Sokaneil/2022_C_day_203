/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-03 - 15:47 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: realloc
 */

#include "vector.h"

void vec_realloc(stu_vector_t *ve)
{
    char *stock;

    stock = malloc(ve->total);
    stu_memcpy(stock, ve->vec, ve->total);
    free(ve->vec);
    ve->vec = malloc(ve->elem_size * (ve->capacity + ve->ini_capa));
    stu_memcpy(ve->vec, stock, ve->total);
    ve->capacity += ve->ini_capa;
    free(stock);
}
