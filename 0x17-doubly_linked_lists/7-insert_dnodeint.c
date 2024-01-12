#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: a reference pointer to a space in memory where the list is
 * stored
 * @idx: the position to add the new node
 * @n: the data to store in the node
 *
 * Return: a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *p;
	unsigned int counter = 0;

	if (*h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	p = *h;
	while (p)
	{
		if (counter == idx - 1)
			break;
		counter++;
		p = p->next;
	}

	p->next->prev = node;
	node->next = p->next;
	p->next = node;
	node->prev = p;

	return (node);
}
