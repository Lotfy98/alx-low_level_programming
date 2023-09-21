#include "lists.h"
/**
 *list_len - gets length of linked list
 *@h: pointer to 1st node
 *Return: size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
