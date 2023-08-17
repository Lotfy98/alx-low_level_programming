#include "main.h"
/**
 *print_numbers - print from 0 to 9 with new line
 *Retrun: 0 to succes
 */
void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i < 10);
	_putchar('\n');
	return (0);
}
