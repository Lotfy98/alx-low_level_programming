#include <unistd.h>
#include "main.h"
/**
 *_putchar - write char c to stdout
 *
 *@c: char to print
 *
 *Return: on succes 1. and on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
