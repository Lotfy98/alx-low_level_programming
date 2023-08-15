#include <unistd.h>
#include "main.h"
/**
 *_putchar - write char x to stdout
 *
 *@x: char to print
 *
 *Return: on succes 1. and on error -1
 */
int _putchar(char x)
	return (write(1, &x, 1);
