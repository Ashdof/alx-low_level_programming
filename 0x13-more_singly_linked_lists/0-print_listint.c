#include "lists.h"

/**
 * print_listint - print linked list elements
 * @h: a pointer to the head of the linked list
 *
 * description: this function prints all the elements of a singly
 * linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
