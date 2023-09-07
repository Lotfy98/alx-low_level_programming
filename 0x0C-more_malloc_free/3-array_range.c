#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates array of ints
 *@min: integer
 *@max: integer
 *Return: array of ints
 */
int *array_range(int min, int max)
{
	unsigned int x = 0, s;
	int *ptr;

	if (min < max)
		return (NULL);
	s = max - min + 1;
	ptr = malloc(s * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (x < s)
	{
		ptr[x] = min + x;
		x++;
	}
	return (ptr);
}
