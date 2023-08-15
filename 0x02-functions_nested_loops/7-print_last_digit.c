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
	if (n)
	{
		n = n % 10;
		return (n);
	}
	return (0);
}
