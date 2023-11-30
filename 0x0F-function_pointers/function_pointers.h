#ifndef _HEAD_H
#define _HEAD_H
#include <stdio.h>

void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));

#endif
