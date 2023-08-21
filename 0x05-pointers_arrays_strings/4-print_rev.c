#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: character
 */
void print_rev(char *s)
{
	int i;
	int x = _strlen(*s) - 1;

	for (i = x; i >= 0; i--)
	{
		_putchar(s[i])'
	}
	_putchar('\n');
}
