#include "main.h"
/**
 *_strlen - a function that returns the length of a string
 * @s: character
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}										
	return (length);
}


/**
 *rev_string - a function that reverses a string
 *@s: character
 *Return: reversed string
 */
void rev_string(char *s)
{
	int x = 0; /*start point*/
	int y = _strlen(s) - 1; /*end point without */
	char z;   /*temporary variable to swap bet. x & y*/

	while (x <= y)
	{
		z = s[x]; 
		s[x] = s[y];
		s[y] = z;
		x++;
		y--;
	}
	_putchar('\n');
}
