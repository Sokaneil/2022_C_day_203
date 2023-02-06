/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-02 - 09:15 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: delete vector
 */

#include "vector.h"

void stu_vector_delete(stu_vector_t *ve)
{
    free(ve->vec);
    free(ve);
}
