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
	int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
