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
 * puts_half - prints 2nd half of string
 *@str: string
 */
void puts_half(char *str)
{
	int i;
	int s = x;
	int x = _strlen(s);
	int z = x - 1;

	while (i == s && i <= z)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
