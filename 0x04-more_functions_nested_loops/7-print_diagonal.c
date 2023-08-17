#include "main.h"
/**
 *print_diagonal - print diagonal line
 *@n: number of time to print character
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			int y = 1;
			
			while (y <= x)
			{
				_putchar(' ');
				y++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
