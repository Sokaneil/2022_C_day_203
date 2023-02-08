/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-06 - 16:55 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: get size
 */

#include "vector.h"

size_t stu_vector_get_size(const stu_vector_t *ve)
{
    return (ve->used_capa);
}
