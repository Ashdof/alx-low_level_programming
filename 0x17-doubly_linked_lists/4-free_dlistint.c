#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: a pointer to a space in memory where the list
 * is stored
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	if (head == NULL)
		return;
	if (head->next == NULL)
		free(head);
	else
	{
		p = head;
		while (p)
		{
			p = p->next;
			free(head);
			head = p;
		}
	}
}
