#include "main.h"
/**
* print_binary- convert to binary
* @n: the passed decimal number
* Return: binary number
*/

void print_binary(unsigned long int n)
{
	int repbit = sizeof(n) * 8, puts = 0;

	while (repbit)
	{
		if (n & 1L << --repbit)
		{
		_putchar('1');
		puts++;
		}
		else if (puts)
		_putchar('0');
	}

	if (!puts)
	_putchar('0');
}
