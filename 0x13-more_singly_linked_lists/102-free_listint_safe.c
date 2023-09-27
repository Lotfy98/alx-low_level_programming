#include "lists.h"
/**
 *free_listint_safe - frees a listint_t linked list
 *@h: double pointer to the start of the list
 *Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	long int diff;
	listint_t *temp;

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodes++;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodes++;
			break;
		}
	}
	*h = NULL;

	return (nodes);
}
