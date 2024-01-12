#include "lists.h"

/**
 * dlistint_len - compute number of nodes in a list
 * @h: a pointer to a space in memory where a list is stored
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t counter = 0;

	while (p)
	{
		counter++;
		p = p->next;
	}

	return (counter);
}
