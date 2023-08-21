#include "main.h"
/**
 *_strlen - a function that returns the length of a string
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
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: character
 */
void print_rev(char *s)
{
	int i;
	int x = _strlen(s) - 1;

	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
