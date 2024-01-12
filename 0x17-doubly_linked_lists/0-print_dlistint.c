#include "lists.h"

/**
 * print_dlistint - print all elements of the list
 * @: a pointer to a space in memory where the list is stored
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p;
	size_t counter = 0;

	if (h == NULL)
		return (counter);

	p = h;
	while (p)
	{
		counter++;
		printf("%d\n", p->n);
		p = p->next;
	}

	return (counter);
}
