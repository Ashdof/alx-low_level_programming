#include <stdlib.h>

/**
 * _realloc - reallocate space in memory
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the size in bytes for the new memory block to allocate
 *
 * description: this function reallocates space in memory
 *
 * Return: a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *p, *q;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	mem = malloc(sizeof(*p) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	q = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		q[i] = *p++;

	free(ptr);
	return (mem);
}
