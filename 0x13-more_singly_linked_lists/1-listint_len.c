#include "lists.h"
/**
* listint_len- function is member of struct
* @h: the passed element
* Descriptoin: return number of node
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i;
	}
	return (i);
}
