#include "main.h"
/**
 *rot13 - encodes string using ROT13
 *@s: string
 *Return: ROT13 encoded string
 */
char *rot13(char *s)
{
	char *z = s;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIKLMNOPQRSTUVWXYZ"
	char ROT13[] = "nopqrstuwxyzabcdefghijklmNOPQRSTUVWXYZABSDEFGHIJKLM";
	int i;

	while (*s)
	{
		for (i = 0; i < 53; i++)
		{
			if (*s == alphabets[i])
			{
				*s = ROT13[i];
			}
			else
			{
				continue;
			}
		}
		s++;
	}
	return (z);
}
