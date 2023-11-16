#include "lists.h"

/**
 * print_list - print elements of a list
 * @h: a pointer to the first node of a singly linked list
 *
 * description: this function prints all the elements of a singly
 * linked list
 *
 * Return: number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h != NULL)
	{
		nodes += 1;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (nodes);
}
