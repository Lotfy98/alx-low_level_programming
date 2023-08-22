#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 *@a: integer
 *@n: integer
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
			printf("%i, ", a[i]);
		i++;
	}
	printf("\n");
}
