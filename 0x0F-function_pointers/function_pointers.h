#ifndef _HEAD_H
#define _HEAD_H
#include <stddef.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
