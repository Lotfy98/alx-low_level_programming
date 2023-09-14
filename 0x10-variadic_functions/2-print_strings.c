#include "variadic_functions.h"
/**
 *print_strings - prints strings with separator
 *@separator: the string separator
 *@n: the number of arguments
 *@...: the strings to print
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *z;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		z = va_arg(args, char*);
		printf("%s", z ? z : "(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
