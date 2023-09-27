#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the start of the list
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int diff;
	const listint_t *arr[1024];

	while (head)
	{
		for (size_t i = 0; i < nodes; i++)
		{
			if (array[i] == head)
			{
				printf("-> [%p] %i\n", (void *)head, head->n);
				return (nodes);
			}
		}
		array[nodes] = head;
		nodes++;
		diff = head - head->next;
		printf("[%p] %i\n", (void *)head, head->n);
		if (diff > 0 && head->next)
		{
			head = head->next;
		}
		else
		{
			if (head->next)
			{
				printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			}
			break;
		}
	}
	return (nodes);
}
