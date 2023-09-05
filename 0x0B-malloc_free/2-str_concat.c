#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
 *str_concat - adds two strings
 *@s1: string
 *@s2: string
 *Return: int
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x1, x2, sum, i = 0;
	char *z;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	x1 = _strlen(s1);
	x2 = _strlen(s2);
	sum = x1 + x2 + "\0";
	z = malloc(sum);

	if (z == 0)
		return (0);

	while (i < sum - "\0")
	{
		if (i < x1)
			z[i] = s1[i];
		else
			z[i] = s2[i - x1];
		i++;
	}
	return (z);
}
