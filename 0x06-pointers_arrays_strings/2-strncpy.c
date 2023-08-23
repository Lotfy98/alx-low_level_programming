#include "main.h"
/**
 *_strncpy - function that copies string
 *@dest: string
 *@src: string
 *@n: integer
 *Return: string after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && i < src[i]; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
