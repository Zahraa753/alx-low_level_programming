#include <stdio.h>
#include <stdlib.h>

/**
*_puts_recursion-the fuction prints the words
*@s: the used variable
*Description: prints words
*Return: nothing
*/

void _puts_recursion(char *s)
{
	_putchar(*(s++));
	if (*s != '\0')
	_puts_recursion(s);
	else
	_putchar('\n');
}
