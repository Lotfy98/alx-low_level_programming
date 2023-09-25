#include "lists.h"
/**
 *add_nodeint_end - adds new node at end of list
 *@head: pointer
 *@n: value
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *node;

	if (head == NULL || newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->n = n;
	if (*head == NULL)
		*head = newNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	return (newNode);
}
