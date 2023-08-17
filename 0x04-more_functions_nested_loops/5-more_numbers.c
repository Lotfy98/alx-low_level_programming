#include "main.h"
/**
 *more_numbers - function to print from 0 - 14 x10
 *Retrun: 10 lines of 0 - 14
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		_putchar(x);
		for (y = 0; y <= 14; y++)
		{
			_putchar(y + 48);
		}
	}
	_putchar('\n');
}
