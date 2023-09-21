#include "lists.h"
/**
 *free_list - frees all nodes of list 
 *@head: pointer to the head node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *nextNode;

	if (head == NULL)
		return;
	node = head;
	while(node)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
}
