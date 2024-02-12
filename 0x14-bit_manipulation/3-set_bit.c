#include "main.h"
/**
* set_bit- convert to binary
* @n: the passed decimal number
* @index: the passed index parameter
* Return: binary number
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 32)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
