#include "lists.h"

/**
 * add_nodeint_end - add node at end of list
 * @head: a reference pointer to the head of a linked list
 * @n: a value of type integer
 *
 * description: this functions creates a new node and adds it to
 * the end of a linked list
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *p;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = node;
	}

	return (*head);
}
