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
	char *array;
	unsigned int i = 0;

	array = malloc(size * 1);
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
