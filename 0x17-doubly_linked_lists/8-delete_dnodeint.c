#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index of a
 *dlistint_t linked list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted, starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	if (current == NULL)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;

	if (current->prev)
		current->prev->next = current->next;
	free(current);
	return (1);
}
