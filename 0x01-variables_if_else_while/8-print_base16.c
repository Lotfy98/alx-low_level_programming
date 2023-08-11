#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: program that prints all the numbers of base 16 in lowercase
 *
 *Return: 0 to success
 */
int main(void)
{
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
		{
			x += 39;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
