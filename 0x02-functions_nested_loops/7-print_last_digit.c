#include "main.h"
/**
 *print_last_digit - function to print last digit of No
 *
 *@n: integer
 *
 *Return: 0 to succes
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = ((-1) * n) % 10;
		return (n);
	}
	else
	{
		lastDigit = n % 10;
	}
	_putchar('0' + lastDigit);
	return (0);
}
