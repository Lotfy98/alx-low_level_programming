#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strdup - returns ptr to new alloc space in memory
 *@str: string
 *Return: ptr
 */
char *_strdup(char *str)
{
	char *xx;
	unsigned int x;

	if (str == NULL)
		return (NULL);

	x = strlen(str) + 1;
	xx = malloc(x);
	if (xx == NULL)
		return (NULL);

	memcpy(xx, str, x);
	return (xx);
}
