#include "main.h"
/**
 *clear_bit - clears the bit at the index
 *@n: the number to index
 *@index: the bit to clear
 *Return: 1 if successful, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (izeof(*n) * 8))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
