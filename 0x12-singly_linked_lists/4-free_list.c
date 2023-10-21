#include "lists.h"

/**
 * free_list - the main function
 * @head: the passed pointer
 *
 * Return: NOTHING
*/

void free_list(list_t *head)
{
	list_t *node;
	list_t *cont;

	if (!head)
		return;
	node = head;
	while (node)
	{
		cont = node->next;
		free(node->str);
		free(node);
		node = cont;
	}
}

