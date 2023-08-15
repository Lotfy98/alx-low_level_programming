#include "main.h"
/**
 *print_alphabet - utilizing putchar to print alphabets
 *
 *Description: print alphabets
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	putchar('\n');
}
