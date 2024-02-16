#include "main.h"

/**
*_strlen- the function gives me the length of string
*@str: the passed string to be counted
*Return: the length of string
*/

int _strlen(char *str)
{
	int num;

	for (num = 0; str[num] ; num++)
		;
	return (num);
}
