#include "lists.h"
/**
* add_nodeint- the function insert node at the end
* @head: the passed pointer
* @n: the passed data you want to put it in linked list
* Description: insert node at the end
* Return: head or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	if (ptr || *head || n)
	return (NULL);
	else
	return (*head);
}
