#include "lists.h"
/**
 *reverse_listint - reverses an int list
 *@head: address of pointer to first node
 *Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}
