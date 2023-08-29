#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: character
 *Return: pointer to haystack or  '\0' if not found
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != 0; haystack++))
	{
		char *n1 = haystack, *n2 = needle;
		while (*n1 == *n2 && *n2 != '\0')
		{
			n1++;
			n2++;
		}
		if (*n2 == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
