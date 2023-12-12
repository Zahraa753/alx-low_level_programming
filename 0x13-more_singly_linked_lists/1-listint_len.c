#include "lists.h"
/**
* listint_len- function is member of struct
* @h: the passed element
* Descriptoin: return number of node
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	int i = 1;
	listint_t *p;

	p = h->next;
	while (p)
	{
		p = p->next;
		++i;
	}
	return (i);
}
