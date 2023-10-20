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
	list_t *las = malloc(sizeof(list_t));
	list_t *co = *head;

	if (!head || !las)
	{
		return (NULL);
	}
	if (str)
	{
		las->str = strdup(str);
		if (!las->str)
		{
			free(las);
			return (NULL);
		}
		las->len = _strlen(las->str);
	}
	if (co)
	{
		while (co->next)
			co = co->next;
		co->next = las;
	}
	else
		*head = las;
	return (las);
}
