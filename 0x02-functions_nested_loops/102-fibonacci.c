#include "main.h"
/**
 *mai - ENTRY POINT
 *
 *Description: print first 50 fibonacci nums form 1, 2
 *
 *Return: 0 to success
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, x;

	for (i = 0; i < 50; i++)
	{
		x = f1 + f2;
		printf("%lu", x);
		f1 = f2;
		f2 = x;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
