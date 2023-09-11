#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure for dog info
 *@name: dog's name
 *@age: dog's age
 *@owner: owner's name
 *Description: Poppy
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
