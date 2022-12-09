#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: a reference to the beginning of the linked list
 *
 * Description: this function is passed a referenced to the head
 * of a linked list; it frees the linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *val;

	while (head != NULL)
	{
		val = head->next;
		free(head);
		head = val;
	}
}
