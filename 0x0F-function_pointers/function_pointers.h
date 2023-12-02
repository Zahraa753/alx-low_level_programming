#ifndef _HEAD_H
#define _HEAD_H
#ifndef size_t
#define size_t long unsigned int
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
#endif
