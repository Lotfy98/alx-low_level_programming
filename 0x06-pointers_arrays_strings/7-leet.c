#include "main.h"
/**
 * leet - encodes string to 1337
 *@s:string
 *Return: encoded string
 */
char *leet(char *s)
{
	char *z = s;
	char x[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i <= 9; i++)
		{
			if (*s == x[i] || *s == x[i] + 32)
			{
				*s = y[i];
			}
		}
		s++;
	}
	return (z);
}
