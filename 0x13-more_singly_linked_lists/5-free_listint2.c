#include "lists.h"

/**
 * free_listint2 - delete a linked list
 * @head: a reference pointer to the head of the linked list
 *
 * description: this function deallocates memory allocated
 * for a linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *tmp;

	p = *head;
	while (p != NULL)
	{
		tmp = p->next;
		free(p);
		p = tmp;
	}

	*head = NULL;
}
