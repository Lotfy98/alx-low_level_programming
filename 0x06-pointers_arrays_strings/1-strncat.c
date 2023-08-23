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
 *_strncat - function that concatenates two strings
 *@dest: string
 *@src: string
 *@n: integer
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, i;

	s = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[s + i] = src[i];
	}
	dest[s + i] = '\0';
	return (dest);
}
