#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given index
 * @head: a reference pointer to a space in memory where the list
 * is stored
 * @index: the position at which to delete the node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	unsigned int counter = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	p = *head;
	if (index == 0)
	{
		*head = p->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(p);

		return (1);
	}

	while (p)
	{
		counter++;
		p = p->next;
		if (p->next == NULL && index > counter)
			return (-1);
		if (counter == index - 1)
			break;
	}

	if (p == NULL)
		return (-1);
	p->prev->next = p->next;
	if (p->next != NULL)
		p->next->prev = p->prev;
	free(p);

	return (1);
}
