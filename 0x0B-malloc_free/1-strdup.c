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
	unsigned int a = 0;

	for (i = 0; str[i]; i++)
	;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL || str == NULL)
	return (NULL);

	while (a < i)
	{
		ptr[a] = str[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
