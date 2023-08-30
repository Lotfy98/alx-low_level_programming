#include "main.h"
/**
 *_sqrt_recursion - find natural square root
 *@n: integer
 *Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 *square - find sq root
 *@n: integer
 *@val: sq root
 *Return: integer
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
