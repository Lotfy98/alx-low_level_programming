#include "main.h"
/**
 *_islower(int c)- a function that checks for lowercase character
 *
 *@c: input of function
 *
 * Return: 1 if lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
