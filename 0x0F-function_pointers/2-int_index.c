#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - searches for integer
 *@array: int array
 *@size: array size
 *@cmp: function
 *Return: integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else if (size <= 0)
		return (-1);

	return (-1);
}
