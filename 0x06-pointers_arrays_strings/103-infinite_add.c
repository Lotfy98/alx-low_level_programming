#include "main.h"
/**
 *_strlen - a function that returns the length of a string
 *@s: character
 *Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length += 1;
		s++;

	return (length);
}
/**
 *infinite_add - adds two numbers
 *@n1: 1st integer
 *@n2: 2nd integer
 *@r: sum of 2 integers
 *@size_r: sum length
 *Return: r as equal of addittion
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d = 0, e, f, i, k, l = 0, s;

	i = _strlen(n1);
	e = _strlen(n2);

	if (i > e)
		l = i;
	else
		l = e;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		e--;
		if (i >= 0)
			f = n1[i] - 48;
		else
			f = 0;
		if (e >= 0)
			s = n2[e] - 48;
		else
			s = 0;
		r[k] = (f + s + d) % 10 + 48;
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + 48;
	}
	return (r);
}
