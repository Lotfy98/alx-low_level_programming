#include "main.h"
/**
 *main - Entry point
 *
 *Description:
 * 
 *Return: 0 to success
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, x;
	float totalSum;

	while (1)
	{
		x = f1 + f2;
		if (x > 4000000)
		{
			break;
		}
		if ((x % 2) == 0)
		{
			totalSum += x;
		}
		f1 = f2;
		f2 = x;
	}
	printf("%.0f\n", totalSum);
	return (0);
}
