#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 *array_iterator - function that executes a function given as a parameter
 *on each element of an array.
 *@array: int arr
 *@size: arr size
 *@action: function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array != NULL && size != NULL && action != NULL)
	{
		while (array <= x)
			action(array++);
	}
}
