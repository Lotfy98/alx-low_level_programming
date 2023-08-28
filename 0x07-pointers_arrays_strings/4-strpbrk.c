#include "main.h"
/**
 *_strpbrk - searches a string for set of bytes
 *@s: string
 *@accept: character
 *Return: pointer to s byte that matches this in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *z;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				z = &s[x];
				return (z);
			}
		}
	}
	return ('\0');
}
