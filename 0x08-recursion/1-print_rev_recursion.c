#include "main.h"

/**
* _print_rev_recursion- reversed function
*@s: the used variable as ponter
*Description: function reverses line
*Return: NOthing
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
