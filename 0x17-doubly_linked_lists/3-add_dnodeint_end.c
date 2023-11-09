#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head of list
 * @n: data to insert in new node
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	dlistint_t *current;

	nn = malloc(sizeof(dlistint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	if (*head == NULL)
	{
		nn->prev = NULL;
		*head = nn;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;

		current->next = nn;
		nn->prev = current;
	}
	return (nn);
}
