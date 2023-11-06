#include <stdlib.h>
#include "dog.h"

int _strlen(char *);
char *_strcpy(char *, char *);
dog_t *new_dog(char *, float, char *);

/**
 * _strlen - compute length of string
 * @s: a pointer to the string
 *
 * description: this function counts the number of characters in a
 * string
 *
 * Return: number of characters as string length
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;

	return (p - s);
}

/**
 * _strcpy - copy strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * description: this function copies bytes from the string pointed to
 * by src to the string pointed to by dest
 *
 * Return: a pointer to the string pointed to by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the name of the owner
 *
 * description: this function uses a dog struct to create a new
 * dog
 *
 * Return: a pointer to the new dog or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;
	int name_len, owner_len;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);

	name_len = _strlen(name);
	mem->name = malloc(sizeof(char) * (name_len + 1));
	if (mem->name == NULL)
		return (NULL);

	owner_len = _strlen(owner);
	mem->owner = malloc(sizeof(char) * (owner_len + 1));
	if (mem->owner == NULL)
	{
		free(mem->name);
		free(mem);

		return (NULL);
	}

	/* copy param values to struct objects */
	
	mem->name = _strcpy(mem->name, name);
	mem->age = age;
	mem->owner = _strcpy(mem->owner, owner);

	return (mem);
}
