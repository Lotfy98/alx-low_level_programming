#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to head of list
 * @n: data to insert in new node
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn;

	nn = malloc(sizeof(dlistint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	nn->prev = NULL;
	nn->next = *head;
	if (*head)
		(*head)->prev = nn;
	*head = nn;
	return (nn);
}
