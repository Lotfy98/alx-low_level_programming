#include "lists.h"
/**
 *_realloc - reallocates memory for an array of pointers
 *to the nodes in a linked list
 *@list: the old list to append
 *@size: size of the new list (always one more than the old  *list)
 *@new: new node to add to the list
 *Return: pointer to the new list
 */
const listint_t **_realloc(const listint_t **list,
size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i = 0;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	while (i < size - 1)
	{
		newlist[i] = list[i];
		i++;
	}
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the start of the list
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i;
	const listint_t **args = NULL;

	while (head)
	{
		i = 0;
		while (i < nodes)
		{
			if (args[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(args);
				return (nodes);
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
