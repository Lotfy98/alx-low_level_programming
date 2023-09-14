#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 *print_name - print name
 *@name: string
 *@f: function pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
