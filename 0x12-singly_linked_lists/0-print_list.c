#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - this function to givr=e me the numbers of elements in s
 * @s: this is the passed data
 *
 * Return: the value of j
*/

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * print_list - the function used to print all elements
 * @h: the passed hedder
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %S\n", _strlen(h->len), h->str);
		node++;
		h = h->next;
	}
	return (node);
}
