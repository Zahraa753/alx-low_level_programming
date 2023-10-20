#include "lists.h"

/**
 * add_node_end - the main function
 *
 * @head: the pointer to nodes
 * @str: the added number
 *
 * Return: 0 or the value of last
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = malloc(sizeof(list_t));
	list_t *com = *head;

	if (!head || !str)
	{
		return (NULL);
	}
	if (str)
	{
		last->str = strdup(str);
		if (!last->str)
		{
			free(str);
			return (NULL);
		}
		last->len = _strlen(last->str);
	}
	if (com)
	{
		while (com->next)
			com = com->next;
		com->next = last;
	}
	else
		*head = last;
	return (last);
}
