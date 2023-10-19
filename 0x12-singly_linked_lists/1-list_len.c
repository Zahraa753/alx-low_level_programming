#include "lists.h"

/**
 * list_len - the function count numbers of list
 * @h: the passed linked list
 *
 * Return: nodes number
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
