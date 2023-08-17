#include "main.h"
/**
 *print_diagonal - print diagonal line
 *@n: number of time to print character
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
