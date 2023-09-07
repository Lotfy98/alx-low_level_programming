#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *_memset - fills memory with constant byte
 * @s:string
 * @b: character
 * @n: max bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
/**
 *_calloc - allocates mem for an array
 *@nmemb: array
 *@size: num of bytes
 *Return: ptr to mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (x == 0)
		return (NULL);

	_memset(x, 0, nmemb * size);
	return (x);
}
