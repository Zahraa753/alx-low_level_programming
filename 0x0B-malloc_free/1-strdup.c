#include "main.h"

/**
*_strdup- used to copy a string
*@str: the passed array to be copied
*Return: ptr
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 1, a = 0;

	while (str[i])
	{
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);
	if (ptr == NULL || str == NULL)
	return (NULL);

	while (a < i)
	{
		ptr[a] = str[a];
		a++;
	}
	return (ptr);
}
