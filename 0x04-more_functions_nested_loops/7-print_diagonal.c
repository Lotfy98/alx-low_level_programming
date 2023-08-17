#include "main.h"
/**
 *print_diagonal - print diagonal line
 *@n: number of time to print character
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		int x = 1;
		int y = 1;

		for (; x <= n; x++)
		{
			for (; y <= x; y++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
