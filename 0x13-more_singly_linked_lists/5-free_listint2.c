#include "lists.h"
/**
 *free_listint2 - frees list of ints
 *@head: pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;
	while (*head)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
}
