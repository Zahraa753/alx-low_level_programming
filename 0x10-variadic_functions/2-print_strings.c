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
	unsigned int i = n;
	char *ptr;
	va_list cmp;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(cmp, n);
	while (i--)
		printf("%s%s", (ptr = va_arg(cmp, char *)) ? ptr : "nil",
			i ? (separator ? separator : "") : "\n");
	va_end(cmp);
}
