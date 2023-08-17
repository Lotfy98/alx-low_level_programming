#include "main.h"
/**
 *print_numbers - print from 0 to 9 with new line
 *Retrun: 0 to succes
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');

	return (0);
}
