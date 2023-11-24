#include "main.h"

/**
*_puts_recursion-the fuction prints the words
*@s: the used variable
*Description: prints words
*Return: nothing
*/

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*(s++));
	if (*s != '\0')
	_puts_recursion(s);
	else
	_putchar('\n');
}
