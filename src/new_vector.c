/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-01 - 14:43 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: create a new vector
 */

#include "vector.h"

stu_vector_t *stu_vector_new(size_t elem_size, size_t initial_capacity)
{
    stu_vector_t *vector;

    vector = malloc(sizeof(stu_vector_t));
    vector->elem_size = elem_size;
    vector->capacity = initial_capacity;
    vector->vec = malloc(elem_size * initial_capacity);
    vector->total = elem_size * initial_capacity;
    vector->ini_capa = initial_capacity;

    return (vector);
}
