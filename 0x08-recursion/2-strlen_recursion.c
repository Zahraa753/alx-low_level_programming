#include "main.h"

/**
*_strlen_recursion- getting the length of array
*@s: the used variable
*Description: getting the length of array
*Return: Nothing
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	return (1);
	s++;
	return (1 + _strlen_recursion(s + 1));
}
