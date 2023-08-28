#include "main.h"
/**
 *_strspn - gets length of prefix substring
 *@s: string
 *@accept: character
 *Return: number of bytes in s which consists
 *of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, l;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (l = 0; accept[l] != s[x]; l++)
		{
			if (s[x] != accept[i])
			return (x);
		}
	}
	return (l);
}
