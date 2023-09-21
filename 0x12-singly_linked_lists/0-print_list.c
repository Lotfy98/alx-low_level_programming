#include "lists.h"
/**
 *print_list - prints list_l
 *@h: pointer to list
 *Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
