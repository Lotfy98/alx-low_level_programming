#include "main.h"
/**
 *cap_string - capitalize all words of string
 *@s: string
 *Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	while (s[i])
	{
		while (!(s[i] >= 97 && s[i] <= 122))
			i++;

		if (s[i - 1] == ' ' ||
		s[i - 1] == '\t' ||
		s[i - 1] == '\n' ||
		s[i - 1] == ',' ||
		s[i - 1] == ';' ||
		s[i - 1] == '.' ||
		s[i - 1] == '!' ||
		s[i - 1] == '?' ||
		s[i - 1] == '"' ||
		s[i - 1] == '(' ||
		s[i - 1] == ')' ||
		s[i - 1] == '{' ||
		s[i - 1] == '}' ||
		i == 0)
			s[i] -= 32;
			i++;
	}
	return (s);
}
