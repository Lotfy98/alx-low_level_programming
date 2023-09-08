#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
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
 * _putchar - write char c to stdout
 * @c: char to print
 * Return: on succes 1. and on error -1
 */
int _putchar(char c);
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
 *_print - prints integer
 *@n: integer
 *Return: 0
 */
void _print(unsigned long int n)
{
	unsigned long int x = 0, y = 0, z;

	while (n  / x > 9)
	{
		y++;
		x *= 10;
	}
	while (x >= 1)
	{
		z = n / x;
		_putchar('0' + z);
		n %= x;
		x /= 10;
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
	int res, l1, l2, n1, n2, i = 0;
	char s[] = "Error\n";

	if (argc != 3)
	{
		printf("%s", s);
		exit(98);
	}
	l1 = _strlen(argv[1]);
	while (i < l1)
	{
		if (!_isdigit(argv[1][i]))
		{
			printf("%s", s);
			exit(98);
		}
		i++;
	}
	l2 = _strlen(argv[2]);
	while (i < l2)
	{
		if (!_isdigit(argv[2][i]))
		{
			printf("%s", s);
			exit(98);
		}
		i++;
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;
	_print(res);
	return (0);
}
