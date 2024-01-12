#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: a reference pointer to a space in memory where a list
 * is stored
 * @n: the value to store in the node
 *
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else if ((*head)->next == NULL)
	{
		(*head)->next = node;
		node->prev = *head;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = node;
		node->prev = tmp;
	}

	return (node);
}
