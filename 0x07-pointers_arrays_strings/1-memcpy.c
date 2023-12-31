#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: string
 *@src: memory area
 *@n: number of bytes copied from src to dest
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
