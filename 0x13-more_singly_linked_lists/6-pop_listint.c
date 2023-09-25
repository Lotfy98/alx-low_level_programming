#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list,
 *and returns the head node’s data (n)
 *@head: double pointer to the start of the list
 *Return: head node's data (n) if linked list is not empty, otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
