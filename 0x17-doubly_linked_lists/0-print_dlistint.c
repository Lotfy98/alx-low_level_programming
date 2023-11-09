#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t = 0;

	current = h;
	while(current)
	{
		printf("%d\n", current->n);
		current = current->next;
		size ++;
	}
	return (size);
}
