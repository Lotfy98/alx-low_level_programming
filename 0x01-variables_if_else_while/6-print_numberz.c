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

	do {
		printf("%i", i);
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
