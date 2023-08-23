#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: character
 * Return: length of string
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
 *_strcat - function that concatenates two strings
 *@dest: string
 *@src: string
 *Return: two strings concatenated
 */
char *_strcat(char *dest, char *src)
{
	int destLength = _strlen(dest);
	int srcLength = _strlen(src);
	int i = 0;

	dest = destLength;
	while (i < srcLength)
	{
		i++;
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return (dest);
}
