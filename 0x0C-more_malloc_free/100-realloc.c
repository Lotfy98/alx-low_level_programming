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
 *Return: ptr array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int mv;

	if (new_size == 0)
		return (NULL);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	if (new_size < old_size)
		mv = new_size;
	else if (old_size < new_size)
		mv = old_size;
	_memcpy(newPtr, ptr, mv);
	free(ptr);
	return (newPtr);
}
