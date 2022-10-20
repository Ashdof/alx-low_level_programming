#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of a list
 * @h: a refernce to the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h
	size_t m = 0;

	while (ptr != NULL)
	{
		if (ptr == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		m++;
	}

	return (m);
}
