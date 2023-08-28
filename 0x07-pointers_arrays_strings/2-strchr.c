#include "main.h"
/**
 *_strchr - locates character in string
 *@s: string
 *@c: character
 *Return: c if succes and null if cahr isn't found
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}
	return (NULL);
}
