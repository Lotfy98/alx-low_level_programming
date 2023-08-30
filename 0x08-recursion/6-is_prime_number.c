#include "main.h"
/**
 *is_prime_number - returns 1 if input is prime no.
 *@n: integer
 *Return: 1 on success, 0 on failure
 */
int is_prime_number(int n)
{
	return (checkPrime(n, 2));
}
/**
 *checkPrime - check all number < n if they cn divide
 *@n: integer
 *@oth: integer
 *Return: integer
 */
int checkPrime(int n, int oth)
{
	if (oth >= n && n > 1)
		return (1);
	else if (n % oth == 0 || n <= 1)
		return (0);
	else
		return (checkPrime(n, oth + 1));
}
