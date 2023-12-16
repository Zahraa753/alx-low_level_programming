#include "main.h"

/**
* binary_to_uint- this function is converting binary to decimal
* @b: this is the passed string
* Return: 0 or the converted num
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	int deci = 0;

	if (b == NULL)
	return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' || b[i] != '0')
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{}
	for (j = i - 1; i = 0; j != -1; j--; i++)
	{
		deci += atoi(b[j]) * (2 ^ i);
	}
	return (deci);
}
