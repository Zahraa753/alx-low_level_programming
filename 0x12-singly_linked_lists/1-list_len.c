#include "lists.h"

/**
 * size_t list_len - the function count numbers of list
 * @h: the passed linked list
 *
 * Return: nodes number
*/

size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
