#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strlen - a function that returns the length of a string
 *@s: character
 *Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}
	return (length);
}
/**
 *argstostr - conactenates all args
 *@ac: integer
 *@av: characters
 *Return: ptr to concatenated arr
 */
char *argstostr(int ac, char **av)
{
	int i = 0, e = 0, lineByte = 0, ptrCounter = 0;
	char *z;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		i++;
		lineByte++;
		lineByte = _strlen(av[i]) + 1;
	}

	z = malloc(lineByte);

	if (z == 0)
		return (NULL);

	while (i < ac)
	{
		i++;
		while (av[i][e] != '\0')
		{
			z[ptrCounter] = av[i][e];
			e++;
			ptrCounter++;
		}
		z[ptrCounter] = '\n';
		ptrCounter++;
	}
	z[ptrCounter] = '\0';
	return (z);
}
