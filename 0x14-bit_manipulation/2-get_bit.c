#include "main.h"
/**
* get_bit_moreclean- convert to binary
* @n: the passed decimal number
* Return: binary number
*/

int get_bit_moreclean(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	return -1;
	return (n >> index & 1);
}
