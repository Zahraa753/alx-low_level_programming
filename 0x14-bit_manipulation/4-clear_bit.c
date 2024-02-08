#include "main.h"
/**
* clear_bit- convert to binary
* @n: the passed decimal number
* Return: binary number
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	char *m = n;
	int i = (sizeof(n) * 8);
	if (index >= sizeof(n) * 8)
	return -1;
	*n = ~(01 << index) & *n;
	return (1);
}
