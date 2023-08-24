#include "main.h"
/**
 *rot13 - encodes string using ROT13
 *@s: string
 *Return: ROT13 encoded string
 */
char *rot13(char *s)
{
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (x = 0; x <= 51; x++)
		{
			if (s[i] == alphabets[x])
			{
				s[i] = ROT13[x];
				break;
			}
		}
	}
	return (s);
}
