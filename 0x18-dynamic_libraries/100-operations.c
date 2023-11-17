#include <stdio.h>

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference of the two integers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
	return (a * b); /* There was a syntax error here. Fixed it. */
}

/**
 * div - Divides two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The quotient of the two integers, or 0 if division by zero
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return 0;
	}
	return (a / b);
}

/**
 * mod - Computes the modulus of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The modulus of the two integers, or 0 if division by zero
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return 0;
	}
	return (a % b);
}
