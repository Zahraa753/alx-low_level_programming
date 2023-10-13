#include "variadic_functions.h"

/**
 * print_numbers - the used function to print numbers
 *
 * @separator: the sembo separate between num
 * @n : the numbers
 *
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	int val;
	va_list num;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(num, n);
	while (i--)
		printf("%d%s", va_arg(num, int), i ? (separator ? separator : "") : "\n");
	va_end(num);
}
