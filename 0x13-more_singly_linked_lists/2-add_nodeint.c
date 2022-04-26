#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to head of list
 * @n: new node int value
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head->n = n;
	if (head != NULL)
		new_head->next = *head;
	else
		new_head->next = NULL;

	head = &new_head;

	return (*head);
}
