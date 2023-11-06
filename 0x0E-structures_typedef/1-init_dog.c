#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: a pointer to the dog struct
 * @name: a pointer to the name of dog 
 * @age: age of dog
 * @owner: a pointer to the owner of dog
 *
 * description: this function initialises a dog struct
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
