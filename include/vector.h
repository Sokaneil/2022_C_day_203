/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-01 - 14:42 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: haeder files
 */

#ifndef _VECTOR_H_
#define _VECTOR_H_
#include "struct.h"
#include <stddef.h>
#include <stdlib.h>

typedef struct stu_vector stu_vector_t;

void *stu_memset(void *ptr, char byte, unsigned int n);
void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n);
void *arrset(void *array,
             void *elem,
             unsigned int elem_size,
             unsigned int n);
void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n);
stu_vector_t *stu_vector_new(size_t elem_size, size_t initial_capacity);
void stu_vector_delete(stu_vector_t *ve);
void *stu_vector_push_back(stu_vector_t *ve, void *elem);
void stu_vector_pop_back(stu_vector_t *ve);
void *stu_vector_get_at(const stu_vector_t *ve, size_t pos);
void *stu_vector_get_front(const stu_vector_t *ve);
void *stu_vector_get_back(const stu_vector_t *ve);
size_t stu_vector_get_size(const stu_vector_t *ve);
size_t stu_vector_get_capacity(const stu_vector_t *ve);
void *stu_vector_insert_at(stu_vector_t *ve, size_t pos, void *elem);
void *stu_vector_push_front(stu_vector_t *ve, void *elem);
void stu_vector_pop_front(stu_vector_t *ve);
void stu_vector_erase_at(stu_vector_t *ve, size_t pos);
void vec_realloc(stu_vector_t *ve);

#endif
