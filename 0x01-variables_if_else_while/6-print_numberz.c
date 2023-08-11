#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: program that prints all single digit numbers of base 10 from 0
 *
 *
 *Return:0 to success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
