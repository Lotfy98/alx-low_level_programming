#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *sum_them_all - sums variable args
 *@n: number of args
 *@...: ints
 *Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);
	while (i < n)
	{
		sum = sum + va_arg(arguments, int);
		i++;
	}
	va_end(arguments);
	return (sum);
}
