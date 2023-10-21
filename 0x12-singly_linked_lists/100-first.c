#include "lists.h"
void _alert(void)__attribute__ ((constructor));
/**
 * _alert - print before main() be excuted
 */

void _alert(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upion my back!\n");
}
