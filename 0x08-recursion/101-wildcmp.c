#include "main.h"
/**
 *movePastStar - itertates past asterisk
 *@s2: 2nd string can contain wild card
 *Return: pointer
 */
char *movePastStar(char *s2)
{
	if (*s2 == '*')
		return (movePastStar(s2 + 1));
	else
		return (s2);
}
/**
 *inception - makes magic a reality
 *@s1: 1st string
 *@s2: 2nd string
 *Return: 1 if true, 0 if false
 */
int inception(char *s1, char *s2)
{
	int result = 0;

	if (*s1 == 0)
		return (0);

	if (*s1 == *s2)
		result += wildcmp(s1 + 1, s2 + 1);

	result += inception(s1 + 1, s2);
	return (result);
}
/**
 *wildcmp - compares two strings and returns 1 if the strings
 *can be considered identical, otherwise return 0
 *@s1: 1st string
 *@s2: 2nd string
 *Return: 1 if true,  0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int result = 0;

	if (!*s1 && *s2 == '*' && !*movePastStar(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);

		return (wildcmp(s1 + 1, s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = movePastStar(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			result += wildcmp(s1 + 1, s2 + 1);

		result += inception(s1, s2);
		return (!!result);
	}
	return (0);
}
