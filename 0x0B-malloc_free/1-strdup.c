#include "main.h"

/**
*_strdup- used to copy a string
*@str: the passed array to be copied
*Return: ptr
*/

char *_strdup(char *str)
{
	int *ptr;
	int i;

	if (!str)
	return (NULL);

	for (i = 0; str[i]; i++)
	;
	ptr = malloc(sizeof(char) * i);
	if (!ptr)
	return (NULL);
	ptr = str;

	return (ptr);
}
