#include <stdio.h>
#include "main.h"
/**
 *isLower - determines lowercase
 *@c: character
 *Return: 1 if true, 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 *isDelimeter - determines if delimeter
 *@c: character
 *Return: 1 if true, 0 if false
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i <= 12; i++)
	{
		if (c == delimiter[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 *cap_string - capitalize all words of string
 *@s: string
 *Return: capitalized string
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int delimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
		{
			delimit = 1;
		}
		else if (isLower(*s) && delimit)
		{
			*s -= 32;
			delimit = 0;
		}
		else
		{
			delimit = 0;
		}
		s++;
	}
	return (ptr);
}
