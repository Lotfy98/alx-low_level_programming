#include "main.h"
/**
 *print_diagonal - print diagonal line
 *@n: number of time to print character
 */
void print_diagonal(int n)
{
	int x, y;

	while (n <= 0)
	{
		_putchar('\n');
	}		
	while ( n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar(' ');
				
			_putchar(92);
			_putchar('\n');
		}
		n++;
	}
}
