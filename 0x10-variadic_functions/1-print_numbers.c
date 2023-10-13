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
	int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n - 1; i++)
	{
		val = va_arg(num, int);
		printf("%d", val);
		if (separator != NULL)
			_putchar(separator);
	}
	_putchar('\n');

}
