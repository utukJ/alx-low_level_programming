#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: listint_t list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *node;

	count = 0;

	for (node = h; node != NULL; node = node->next)
		count++;

	return (count);
}
