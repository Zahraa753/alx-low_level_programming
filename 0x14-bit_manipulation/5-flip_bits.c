#include "main.h"

/**
* flip_bits- convert to binary
* @n: the passed from number
* @m: the passed to num
* Return: how many bit to change to reach the other num
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int x = n ^ m;
	unsigned int sum = 0;

	for (; x > 0; )
	{
	if (x & 1)
	sum++;
	x = x >> 1;
	}
	return (sum);
}
