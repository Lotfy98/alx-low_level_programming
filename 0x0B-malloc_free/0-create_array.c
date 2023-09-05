#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates array of chars and initializes
 *it with specific char
 *@size: integer
 *@c: character
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i = 0;

	if (array == 0 || size == 0)
		return (0);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
