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
 *rev_string - a function that reverses a string
 *@s: character
 *Return: reversed string
 */
void rev_string(char *s)
{
	int x = _strlen(s);

	while (x > 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
