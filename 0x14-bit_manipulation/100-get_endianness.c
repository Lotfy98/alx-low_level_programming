#include "main.h"
/**
 *get_endianness - returns endianness of sys
 *Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
