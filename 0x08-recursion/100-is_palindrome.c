#include "main.h"
/**
 *lastIndex - gets last index of string including null character
 *@s: pointer to string
 *Return: integer
 */
int lastIndex(char *s)
{
	int x = 0;

	if (*s > '\0')
		x += lastIndex(s + 1) + 1;

	return (x);
}
/**
 *is_palindrome - checks if string is palindrome
 *@s: pointer to string
 *Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int last = lastIndex(s);

	return (check(s, 0, last - 1, last % 2));
}
/**
 * check - checks for palindrome
 * @s: pointer to string
 * @start: ints from right to left
 * @end: ints from left to right
 * @mod: integer
 *Return: 0 or 1
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (checks, start + 1, end - 1, mod);
}
