#include "main.h"
/**
* get_bit- convert to binary
* @n: the passed decimal number
* Return: binary number
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	return (-1);
	char arr[sizeof(n) * 8];
	int i = 0;

	int repbit = sizeof(n) * 8, puts = 0;

	while (repbit)
	{
		if (n & 1L << --repbit)
	{
		arr[repbit] = 1;
		puts++;
	}
		else if (puts)
		arr[repbit] = 0;
	}
	return (arr[index]);
}
