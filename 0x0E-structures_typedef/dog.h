#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog struct
 * @d: struct dog to initialise
 * @name: name of dog
 * @age: age of dog
 * @owner: string
 *
 * Return: NUll or newdog
 */

void *init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
