#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *free_dog - free dog structure if true
 *@d: dog structure
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if ((*d).name)
			free((*d).name);
		if ((*d).owner)
			free((*d).owner);
		free(d);
	}
}
