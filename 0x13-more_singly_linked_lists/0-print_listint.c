#include "lists.h"

/**
* print_listint- function is member of struct
* @h: the passed element
* Descriptoin: print all elements of struct
* Return: the number of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 1;
	listint_t *p;

	printf("%d\n", h->n);
	p = h->next;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
