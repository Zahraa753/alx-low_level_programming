#include "variadic_functions.h"

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
	va_list agr;

	if (!n)
		return (0);
	va_start(agr, n);
	while (i--)
	{
		comp += var_arg(agr, int);
	}
	va_end(agr);
	return (comp);
}
