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

	if (idx == 0)
	{
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	p = *h;
	while (p)
	{
		if (counter == idx - 1)
			break;
		counter++;
		p = p->next;
	}
	if (p == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = p->next;
	node->prev = p;
	if (p->next != NULL)
		p->next->prev = node;
	p->next = node;
	return (node);
}
