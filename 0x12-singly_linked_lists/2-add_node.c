#include "lists.h"
/**
 *add_node - Adds a new node at the beginning of a list_t list.
 *@head: Double pointer to the head of the list.
 *@str: String to be included in the new node.
 *Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
