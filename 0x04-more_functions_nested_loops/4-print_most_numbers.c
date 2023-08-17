#include "main.h"
/**
 * print_most_numbers - print 0 - 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		_putchar(x + 48);
		x++;
	}
	_putchar('\n');
}
