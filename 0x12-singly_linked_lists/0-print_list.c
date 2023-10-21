#include "lists.h"

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
			printf("[%d] %S\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}
