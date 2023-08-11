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
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
