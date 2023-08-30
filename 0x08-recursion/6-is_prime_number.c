#include "main.h"
/**
 *is_prime_number - returns 1 if input is prime no.
 *@n: integer
 *Return: 1 on success, 0 on failure
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
