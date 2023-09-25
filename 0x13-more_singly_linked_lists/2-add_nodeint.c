#include "lists.h"
/**
 *add_nodeint - adds node to end of linked list
 *@head: pointer to 1st node
 *@n: value
 *Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (head == NULL || newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->n = n;
	if (*head != NULL)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
