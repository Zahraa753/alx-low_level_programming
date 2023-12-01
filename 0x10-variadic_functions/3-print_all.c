#include "variadic_functions.h"

/**
*for_char- print string
*@sep: the passed separator
*@ap: the passed ap
*Return: NOTHING
*/

void for_char(char *sep, va_list ap)
{
	printf("%s%c", sep, va_arg(ap, int));
}
/**
*for_int- print string
*@sep: the passed separator
*@ap: the passed ap
*Return: NOTHING
*/

void for_int(char *sep, va_list ap)
{
	printf("%s%d", sep, va_arg(ap, int));
}
/**
*for_float- print string
*@sep: the passed separator
*@ap: the passed ap
*Return: NOTHING
*/
void for_float(char *sep, va_list ap)
{
	printf("%s%f", sep, va_arg(ap, double));
}
/**
*for_string- print string
*@sep: the passed separator
*@ap: the passed ap
*Return: NOTHING
*/
void for_string(char *sep, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int) (!str))
		case 1:

		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
*print_all- this function print all passed data
*@format: the passed format
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list ap;

	token_t tokens[] = {
	{"c", for_char},
	{"i", for_int},
	{"f", for_float},
	{"s", for_string},
	{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
	j = 0;
	while (tokens[j].token)
	{
		if (format[i] == tokens[j].token[0])
		{
			tokens[j].f(sep, ap);
			sep = ", ";
		}
		j++;
	}
	i++;
	}
	printf("\n");
va_end(ap);

}
