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

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
	return (NULL);

	ptr = str;
	if (ptr == NULL)
	return (NULL):
	return (ptr);
}
