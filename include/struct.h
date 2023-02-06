/*
 * E89 Pedagogical & Technical Lab
 * project:     day 203
 * created on:  2023-02-01 - 14:21 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: structure
 */
#include <stddef.h>
#ifndef _STRUCT_H_
#define _STRUCT_H_

struct stu_vector {
    void *vec; //table
    size_t capacity; //max capacity
    size_t elem_size; //element size
    size_t total; //total of bytes
    size_t used_capa; //
    int ini_capa;
};

#endif
