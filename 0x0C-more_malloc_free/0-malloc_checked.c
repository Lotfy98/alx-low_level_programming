#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function allocates mem using 'malloc'
 *@b: integer
 *Return: ptr to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	if (x == NULL)
		return (NULL);

	x = (int *)malloc(b * sizeof(int *));
	return (x);
}
