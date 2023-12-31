#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s:string
 *@b: character
 *@n: max bytes
 *Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
