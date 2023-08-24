#include "main.h"
/**
 *print_number - prints an integer
 *@n: integer
 *Return: integer
 */
void print_number(int n)
{
	unsigned int x = n;

	while (n < 0)
	{
		_putchar('-');
		x = -n;
		break;
	}
	while (x / 10 != 0)
	{
		print_number(x / 10);
		break;
	}
	_putchar((x % 10) + '0');
}
