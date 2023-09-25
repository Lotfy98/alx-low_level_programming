#include "lists.h"
/**
 *listint_len - print num of lists
 *@h: pointer
 *Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
