#include "lists.h"
/**
 *get_nodeint_at_index - returns chosen node
 *@head: pointer
 *@index: node to get
 *Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
			return (head);
		x++;
		head = head->next;
	}
	return (NULL);
}
