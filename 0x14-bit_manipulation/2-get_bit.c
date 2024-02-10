#include "main.h"
/**
* get_bit- convert to binary
* @n: the passed decimal number
* @index: the passed index
* Return: binary number
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	return (-1);
	return (n >> index & 1);
}
