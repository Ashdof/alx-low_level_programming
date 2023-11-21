#include "lists.h"

/**
 * free_listint - delete a linked list
 * @head: a pointer to the head of the linked list
 *
 * description: this function deallocates memory allocated
 * for a linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (head->next == NULL)
	{
		free(head);
		return;
	}

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
