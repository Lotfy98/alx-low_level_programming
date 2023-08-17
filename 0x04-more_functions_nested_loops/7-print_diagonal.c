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
		int x, y;

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				_putchar(' ');
			}

			_putchar("\\\n");
		}
		_putchar('\n');
	}
}
