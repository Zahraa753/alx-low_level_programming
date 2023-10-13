#include "variadic_functions.h"

/**
 * print_strings - the used function to print just strings
 * @separator: separate nums
 * @n: numbers
 *
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list cmp;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(cmp, n);
	while (i--)
		if (va_arg(cmp, string))
		{
		printf("%s%s", va_arg(cmp, string), i ? (separator ? separator : "") : "\n");
		}
	va_end(cmp);
}
