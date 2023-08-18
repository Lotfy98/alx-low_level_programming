#include <stdio.h>
#include <math.h>
/**
 *main - print largest prime factor for nmber
 *Return: 0 to success
 */
int main(void)
{
	long num = 612852475143;
	int i;
	long int largestPrime = -1;
	long int x = sqrt(num);

	for (i = 2; i <= x; i++)
	{
		while (num % i == 0)
		{
			largestPrime = i;
			num /= i;
		}
	}
	if (num > 1)
	{
		largestPrime = num;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
