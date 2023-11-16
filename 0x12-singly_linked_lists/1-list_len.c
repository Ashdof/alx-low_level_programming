#include "lists.h"

/**
 * list_len - compute length
 * @h: a pointer to the first node in the linked list
 *
 * description: this function computes the number of elements in
 * linked list
 *
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
