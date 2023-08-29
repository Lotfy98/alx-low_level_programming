#include "main.h"
/**
 *print_diagsums - desc
 *@a: two dimensional array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, x = 0, y = 0;

	while (i < size)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
