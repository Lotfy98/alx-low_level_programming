#include "main.h"
/**
 *print_number - prints an integer
 *@n: integer
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	else if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + 48);
}
