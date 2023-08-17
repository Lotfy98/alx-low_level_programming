#include "main.h"
/**
 *_isdigit - function to check for digit through 0 to 9
 *
 *@c: integer
 *
 *Return: 1 on succes and 0 on else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
