#include "lists.h"
#include <stdlib.h>

/**
 * list_len - counts for the number of elements in a linked list
 * @h: a refernce to the linked list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
