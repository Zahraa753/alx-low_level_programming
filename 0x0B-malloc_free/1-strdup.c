#include "main.h"

/**
*_strdup- used to copy a string
*@str: the passed array to be copied
*Return: ptr
*/

char *_strdup(char *str)
{
	char *ptr;
	int i;

	for (i = 0; str[i]; i++)
	;
	ptr = malloc(sizeof(char) * i);
	ptr = str;
	if (ptr == NULL || str == NULL)
	return (NULL):
	return (ptr);
}
