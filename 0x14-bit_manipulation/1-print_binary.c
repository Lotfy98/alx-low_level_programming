#include "main.h"
/**
 *print_binary - prints a number as binary string
 *@n: the number to print
 *Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar((n & 1) + 48);
}
