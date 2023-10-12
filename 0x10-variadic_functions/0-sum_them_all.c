#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - the used function to compare numbers with 0
 * @n: numbers
 *
 * Return: 0 or any
*/

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int comp;
	var_list agr;

	comp = var_arg(agr, n);
	for (i = 0; i < n - 1; i++)
	{
		comp = var_arg(agr, n);
		if (comp == 0)
			return (0);
	}
}
