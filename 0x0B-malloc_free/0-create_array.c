#include "main.h"

/**
*create_array- the used function to create function
*@size: the passed size
*@c: the passed character
*Return: the pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (!ptr || size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}

	return (ptr);
}
