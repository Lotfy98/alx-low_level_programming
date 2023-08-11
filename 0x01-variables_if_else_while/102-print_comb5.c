#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: program that prints combinations of numbers
 *
 *Return: 0 to success
 */
int main(void)
{
	int x = 0, y = 0;

	while (x <= 99)
	{
		while (y <= 99)
		{
			if (y != x)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (!((x == 98) && (y == 99)))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
		y = x;
	}
	putchar('\n');
	return (0);
}
