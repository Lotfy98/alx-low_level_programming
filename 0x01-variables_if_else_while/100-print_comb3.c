#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: program that prints combinations of two digits numbers
 *
 *Return: 0 to success
 */
int main(void)
{
	int i = 0;

	while (i <= 99)
	{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	putchar('0');
	}
	 i++;
	}
	putchar('\n');
	return (0);
}
