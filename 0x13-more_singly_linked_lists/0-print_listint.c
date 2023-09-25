#include "lists.h"
/**
 *print_listint - print linked list
 *@h: pointer
 *Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
