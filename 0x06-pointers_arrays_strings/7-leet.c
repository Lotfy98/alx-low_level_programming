#include "main.h"
/**
 * leet - encodes string to 1337
 *@s:string
 *Return: encoded string
 */
char *leet(char *s)
{
	int *z = s;
	int i = 0;
	char x[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char y[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*s)
	{
		for (i = 0; i <= 9 ; i++)
		{
			if (*s == x[i] || *s == x[i] - 32)
			{
				*s = y[i];
			}
		}
		s++;
	}
	return (z);
}
