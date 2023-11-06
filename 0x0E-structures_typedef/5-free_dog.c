#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct
 * @d: a pointer to dog struct
 *
 * description: this function frees a dog
 *
 * Return: nothig
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
