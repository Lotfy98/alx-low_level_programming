#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * wordCounter - counts number of words
 *@s: string
 *Return: number of words
 */
int wordCounter(char *s)
{
	int i = 0, n = 0;

	while (s[i])
	{
		i++;
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 *strtow - spilts string to words
 *@str: string
 *Return: array of words
 */
char **strtow(char *str)
{
	int wordCount = 0, n = 0, i = 0, e, x, y;
	char **z;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordCounter(str);
	if (n == 1)
		return (NULL);
	z = (char **)malloc(n * sizeof(char *));
	if (z == NULL)
		return (NULL);
	z[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (e = 1; str[i + e] != ' ' && str[i + e]; e++)
				;
			e++;
			z[wordCount] = (char *)malloc(e * sizeof(char));
			e--;
			if (z[wordCount] == NULL)
			{
				for (x = 0; x < wordCount; x++)
					free(z[x]);
				free(z[n - 1]);
				free(z);
				return (NULL);
			}
			for (y = 0; y < e; y++)
				z[wordCount][y] = str[i + y];
			z[wordCount][y] = '\0';
			wordCount++;
			i += e;
		}
		else
			i++;
	}
	return (z);
}
