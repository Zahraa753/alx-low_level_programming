#include "main.h"

/**
*_strdup- used to copy a string
*@str: the passed array to be copied
*Return: ptr
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	for (i = 0; str[i]; i++)
	;
	ptr = malloc((sizeof(char) * i) + 1);
	if (ptr == NULL || str == NULL)
	return (NULL);
	ptr = str;
	ptr[i + 1] = '\0';
	return (ptr);
}
