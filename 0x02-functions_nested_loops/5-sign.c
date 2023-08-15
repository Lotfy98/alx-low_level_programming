#include "main.h"
/**
 *print_sign - function
 *
 *@n: integer
 *
 *Return: 1 if +ve, 0 if  0 and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	return (0);
}
