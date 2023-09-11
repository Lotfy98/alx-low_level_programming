#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_dog - prints dog's structure
 *@d: structure to print
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
		printf("Age: %.6f\n", (*d).age);
	}
}
