#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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
 *string_nconcat - function concats 2 strings
 *@s1: pointer to 1st string
 *@s2: pointer to 2nd string
 *@n: num of bytes to concat
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int x = 0, y = 0, l1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);

	z = malloc(l1 + n + 1);
	if (z == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		z[x] = s1[x];
		x++;
	}
	while (y < n)
	{
		z[x] = s2[y];
		y++;
		x++;
	}
	z[x] = '\0';
	return (z);
}
