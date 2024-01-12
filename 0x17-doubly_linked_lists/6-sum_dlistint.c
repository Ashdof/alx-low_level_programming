#include "lists.h"

/**
 * sum_dlistint - compute the sum of data in a list
 * @head: a pointer to a space in memory where a list is stored
 *
 * Return: the sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
