#include <stdio.h>
#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - a function that returns the length of a string
 *@s: character
 *Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}
	return (length);
}
/**
 *_strcpy - function that copies the string pointed to by src, including
 *the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: character
 *@src: character
 *Return: pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
/**
 *new_dog - creates new dog structure
 *@name: dog
 *@age: dog
 *@owner: owner
 *Return: pointer to new dog structure
 *NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (!name || age < 0 || !owner)
		return (NULL);

	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	(*newDog).name = malloc(_strlen(name) + 1);
	if ((*newDog).name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	(*newDog).owner = malloc(_strlen(owner) + 1);
	if ((*newDog).owner == NULL)
	{
		free((*newDog).name);
		free(newDog);
		return (NULL);
	}
	(*newDog).name = _strcpy((*newDog).name, name);
	(*newDog).owner = _strcpy((*newDog).owner, owner);
	(*newDog).age = age;

	return (newDog);
}
