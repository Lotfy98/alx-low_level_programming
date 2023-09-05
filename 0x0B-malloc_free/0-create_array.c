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
	int i = 0;

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
