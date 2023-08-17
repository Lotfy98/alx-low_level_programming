#include "main.h"
/**
 *more_numbers - function to print from 0 - 14 x10
 *Retrun: 10 lines of 0 - 14
 */
void more_numbers(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			y = z;
			if (y > 9)
			{
				_putchar(1 + 48);
				z = y % 10;
			}
			_putchar(z + 48);
		}
		_putchar('\n');
	}
}
