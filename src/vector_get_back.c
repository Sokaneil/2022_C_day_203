/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-06 - 16:37 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector get back
 */

#include "vector.h"

void *stu_vector_get_back(const stu_vector_t *ve)
{
    return (&((char *)ve->vec)[ve->total - ve->elem_size]);
}
