#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: program that prints combinations of single-digit numbers
 *
 *Return: 0 to success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
