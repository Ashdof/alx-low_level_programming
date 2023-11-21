#include "lists.h"

/**
 * listint_len - count nodes
 * @h: a pointer to the first node in the linked list
 *
 * description: this function computes the length of a linked list
 * by counting its nodes
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
