#include "main.h"
/**
 *print_alphabet - utilizing putchar to print alphabets
 *
 *Description: print alphabets
 *
 *Retrun: 0 to success
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x < 'z')
	{
		_putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
