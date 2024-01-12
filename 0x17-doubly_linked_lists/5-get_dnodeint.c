#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a given position
 * @head: a pointer to a space in memory where the list is stored
 * @index: the position to obtain the node
 *
 * Return: the node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	p = head;
	while (p)
	{
		counter++;
		p = p->next;
		if (p->next == NULL && index > counter)
			return (NULL);
		if (counter == index)
			break;
	}

	return (p);
}
