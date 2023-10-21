#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - print before main() be excuted
 *
 * Return: nothing
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upion my back!\n");
}
