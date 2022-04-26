/**
 * free_listint - frees a listint_t list
 * @head: listint_t list to be freed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}
