#include "main.h"

/**
*create_array- the used function to create function
*@size: the passed size
*@c: the passed character
*Return: the pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char arr[size];
	char (*ptr)[size] = arr;
	int i;

	if (size == 0 || !ptr)
	return (NULL);
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}

	return (ptr);
}
