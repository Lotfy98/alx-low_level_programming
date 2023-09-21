#include "lists.h"
/**
 *add_node_end - adds new node at the end of a list
 *@head: derefrencing head of the list
 *@str: string to add
 *Return: address on succes, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *end = *head;
	int len = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	if(!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (end->next)
		end = end->next;
	end->next = newNode;
	return (newNode);
}
