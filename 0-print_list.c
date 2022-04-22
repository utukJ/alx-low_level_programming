#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list defined as type list_t
 *
 * Return: number of nodes of list_t
 */
size_t print_list(const list_t *h)
{
	const list_t *node;
	size_t count;

	node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);

		node = node->next;
		count++;
	}

	return (count);
}
