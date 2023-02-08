/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-06 - 16:30 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector get front
 */

#include "vector.h"

void *stu_vector_get_front(const stu_vector_t *ve)
{
    return (&((char *)ve->vec)[0]);
}
