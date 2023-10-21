#include "lists.h"

/**
 * add_node - the used functionto add element
 * @head: the passed address
 * @str: the passed new node
 *
 * Return: the value of the length of str
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
	}
	/**
 	* modify the address
	*/
	new->next = *head;
	*head = new;
	return (new);
}
