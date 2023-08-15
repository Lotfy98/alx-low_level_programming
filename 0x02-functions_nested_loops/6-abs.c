#include "main.h"
/**
 *_abs - function to print absolute of integer
 *
 *@n: integer
 *
 *
 *Return: 0 to success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= (-1);
		return (n);
	}
	return (0);
}
