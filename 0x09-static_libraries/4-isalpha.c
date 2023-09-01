#include "main.h"
/**
 * _isalpha - checks for letter
 *
 *Description: function to check if character is alphabetic
 *
 *@c: to check for input
 *
 *Return: 1 if c is letter and always 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
