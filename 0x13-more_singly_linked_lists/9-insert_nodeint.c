#include "lists.h"
/**
 *insert_nodeint_at_index - inserts new node at given index
 *@head: address of pointer to first node
 *@idx: index to insert new node
 *@n: n value of new node
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (head == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (x < idx - 1 && temp)
	{
		temp = temp->next;
		x++;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
