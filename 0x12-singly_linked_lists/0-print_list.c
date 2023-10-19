#include "lists.h"

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
 * print_list - the base function that prints members of the h array
 * @h: the passed data
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h), h->str ? h->str : "(nil)");
		h = h->next;
		j++
	}
	return (j);
}
