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
	if (n < 0)
	{
		n =((-1) * n) % 10;
		return (n);
	}
	else
	{
		n = n % 10;
	}
	return (0);
}
