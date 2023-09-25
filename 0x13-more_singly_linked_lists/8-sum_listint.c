#include "lists.h"
/**
 *sum_listint - adds all data in list
 *@head: pointer
 *Return: result of addition
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;

	}
	return (res);
}
