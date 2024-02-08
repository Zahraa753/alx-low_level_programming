#include "main.h"
/**
* set_bit- convert to binary
* @n: the passed decimal number
* Return: binary number
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(n) * 8)
		return -1;
	*n = (1 << index) | *n;
	return (1);
}
