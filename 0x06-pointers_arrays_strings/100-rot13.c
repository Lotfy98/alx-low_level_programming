#include "main.h"
/**
 *rot13 - encodes string using ROT13
 *@s: string
 *Return: ROT13 encoded string
 */
char *rot13(char *s)
{
	char *z = s;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (i = 0; i <= 52; i++)
		{
			if (*s == alphabets[i])
			{
				*s = ROT13[i];
				break;
			}
		}
	}
	return (z);
}
