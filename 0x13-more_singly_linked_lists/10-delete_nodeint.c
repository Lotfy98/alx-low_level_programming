#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node at given index
 *@head: address of pointer to first node
 *@index: index of node to delete
 *Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *curr, *next;

	if (*head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr && x < index - 1)
	{
		curr = curr->next;
		x++;
	}

	if (curr == NULL || curr->next == NULL)
		return (-1);

	next = curr->next->next;
	free(curr->next);
	curr->next = next;

	return (1);
}
