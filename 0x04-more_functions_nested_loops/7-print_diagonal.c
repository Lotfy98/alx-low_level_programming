#include "main.h"
/**
 *print_diagonal - print diagonal line
 *@n: number of time to print character
 *Return: nothing
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{	
				_putchar(' ');
			}
			_putchar(92);
			if (x == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
