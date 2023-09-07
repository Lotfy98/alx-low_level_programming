#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _putchar - write char c to stdout
 * @c: char to print
 * Return: on succes 1. and on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *_puts -  function that prints a string, followed by a new line, to stdout
 *@str: charcter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 *_isdigit - function to check for digit through 0 to 9
 *@c: integer
 *Return: 1 on succes and 0 on else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
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
 *_atoi - converts string to integer
 *@s: string
 *Return: converted integer from string
 */
int _atoi(char *s)
{
	unsigned int x = 0;
	int y = 1;

	do {
		if (*s == '-')
		{
			y *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			x = (x * 10) + (*s - '0');
		}
		else if (x > 0)
		{
			break;
		}
	} while (*s++);

	return (x * y);
}
/**
 *mult - multiplies two integers
 *@n1: integer
 *@n2: integer
 *@l1: length integer 1
 *@l2: length integer 2
 *Return: multiply result
 */
int mult(int *n1, int *n2, int l1, int l2)
{
	int *z = malloc((l1 + l2) * sizeof(int));
	int *result;
	int i = 0, e = 0, c = 0, r = 0, s;

	while (i < l1 + l2)
	{
		z[i] = 0;
		i++;
	}
	while (i < l1)
	{
		while (e < l2)
		{
			z[i + e] += n1[i] * n2[e];
			e++;
		}
	}
	for (s = l1 + l2 - 1; s >= 0; s--)
	{
		z[s] += c;
		c = z[s] / 10;
		z[s] %= 10;
	}
	while (i < l1 + l2)
	{
		if (z[i] != 0)
		{
			r = i + 1;
			break;
		}
		i++;
	}
	result = malloc(r * sizeof(int));

	while (i < r)
	{
		result[i] = z[i];
		i++;
	}
	free(z);
	return (result);
}
/**
 *_print - prints integer
 *@n: integer
 *Return: 0
 */
void _print(unsigned long int n)
{
	unsigned long int x = 1, y, z;

	for (y = 0; n  / x > 9; i++, x *= 10)
		;
	for (; x >= 1; n %= x, x /= 10)
	{
		z = n / x;
		_putchar('0' + z);
	}
}
/**
 *main - entry point
 *@argc: counter
 *@argv: value
 *Return: 0 to success
 */
int main(int argc, char*argv[])
{
	int l1, l2, *n1, *n2, *result;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	if (!_isdigit(argv[1][0]) || !_isdigit(argv[2][0]))
	{
		_puts("Error ");
		exit(98);
	}
	l1 = _strlen(argv[1]);
	l2 = _strlen(argv[2]);
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = mult(n1, n2, l1, l2);
	_print( result[0]);
	_putchar('\n');
	free(n1);
	free(n2);
	free(result);
	return (0);
}
