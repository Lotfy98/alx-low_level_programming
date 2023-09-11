#include "dog.h"
#include <stddef.h>
/**
 *init_dog - init dog structure
 *@d: structure toinitialize
 *@name: dog
 *@age: dog
 *@owner: owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
