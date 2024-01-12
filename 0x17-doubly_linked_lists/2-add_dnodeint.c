#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a list
 * @head: a reference pointer to a space in memory where a linked
 * list is stored
 * @n: the data to store in the linked list
 *
 * Return: address of the new node or a null pointer if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
