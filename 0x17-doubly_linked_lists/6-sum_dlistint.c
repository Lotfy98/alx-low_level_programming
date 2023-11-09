#include "lists.h"
/**
 * sum_dlistint - returns the sum of the data (n) of dlistint_t linked list
 * @head: pointer to head of the list
 * Return: sum of all the data (n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (sum);
}
