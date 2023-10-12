#include "main.h"

/**
 * sum_them_all - the used function to compare numbers with 0
 * @n: numbers
 *
 * Return: 0 or any
*/

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int comp = 0;
	var_list agr;

	var_start(agr, n);
	if (!n)
		return (0);
	while (i--)
	{
		comp += var_arg(agr, int);
	}
	va_end(agr);
	return (comp);
}
