#include "main.h"
/**
 *main - Entry point
 *
 *Descriuption: sum of 3 and 5 multiples below 1024
 *
 *Return: 0 to success
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5  == 0))
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
