#include "main.h"
/**
 *reverse_array - function reverses content of array
 *@a: integer
 *@n: integer
 *Return: content of array reversed
 */
void reverse_array(int *a, int n)
{
	int i, j, temporary;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temporary = a[i];
		a[i] = a[j];
		a[j] = temporary;
	}
}
