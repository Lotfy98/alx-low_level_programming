#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: string
 * @src: memory area
 * @n: number of bytes copied from src to dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
/**
 *_realloc - reallocates mem block
 *@ptr: pointerto mem
 *@old_size: size of allocated space
 *@new_size: size of new mem block
 *Return:ptr array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr, *oldPtr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	oldPtr = ptr;
	if (new_size < old_size)
	{
		while (i < old_size)
		{
			newPtr[i] = oldPtr[i];
			i++;
		}

	}
	if (old_size < new_size)
	{
		while (i < old_size)
		{
			newPtr[i] = oldPtr[i];
			i++;
		}
	}
	free(ptr);
	return (newPtr);
}
