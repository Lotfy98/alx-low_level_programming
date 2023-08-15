#include "main.h"
/**
 *print_alphabet_x10 -function that prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int x, r;

	for (r = 0; r <= 9; r++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
