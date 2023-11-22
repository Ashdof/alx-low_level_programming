#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: a reference pointer to the linked list
 *
 * description: this function reverses the nodes of a singly linked
 * list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = next = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
