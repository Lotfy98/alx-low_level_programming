#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the start of the list
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i = 0;
	const listint_t **args = NULL;

	while (head)
	{
		while (i < nodes)
		{
			if (args[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(args);
			}
			i++;
		}
		nodes++;
		args = _realloc(args, nodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(args);
	return (nodes);
}
