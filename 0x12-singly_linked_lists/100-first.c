#include "lists.h"
void _alert(void)__attribute__ ((constructor));
/**
 * _alert - print before main() be excuted
 */
void _alert(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
