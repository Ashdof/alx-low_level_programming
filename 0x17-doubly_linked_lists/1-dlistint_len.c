#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: a reference to the beginning of a linked list
 *
 * Description: this function is passed a reference to the head of
 * a linked list. It then counts and returns the number of nodes in
 * in the linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
