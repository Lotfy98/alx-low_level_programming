#include "lists.h"
/**
 *  * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *   *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 *Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;
	if (current == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = current->next;
	newNode->prev = current;
	if (current->next)
		current->next->prev = newNode;
	current->next = newNode;
	return (newNode);
}
