#include "lists.h"

/**
 * free_list - free a linked list
 * @head: a pointer to the first node in the list
 *
 * description: this function frees the space in memory allocated for
 * a linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
