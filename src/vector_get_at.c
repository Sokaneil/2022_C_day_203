/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-06 - 15:19 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: vector get an element at
 */

#include <stddef;h>

void *stu_vector_get_at(const stu_vector_t *ve, size_t pos)
{
    if (ve) {
        return(ve->vec + (pos * ve->elem_size));
    }
    if (pos > ve->elem_size) {
        return NULL;
    }
}
