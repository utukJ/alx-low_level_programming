#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to head of list
 * @n: new node int value
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}

	for (tmp = *head; tmp->next != NULL; tmp = tmp->next)
		;

	tmp->next = node;
	node->next = NULL;

	return (node);
}
