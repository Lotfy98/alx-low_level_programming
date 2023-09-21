#include "lists.h"
/**
 *printBefore - print string before main()
 *Return: void
 */
void printBefore(void) __attribute__ ((constructor));
void printBefore(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
