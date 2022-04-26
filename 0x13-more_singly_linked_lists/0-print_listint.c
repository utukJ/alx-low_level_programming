#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *node;

	count = 0;

	for (node = h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		count++;
	}

	return (count);
}
