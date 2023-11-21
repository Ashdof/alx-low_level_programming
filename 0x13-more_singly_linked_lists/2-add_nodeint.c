#include "lists.h"

/**
 * add_nodeint - add a new node at beginning
 * @head: a reference pointer to the head of a linked list
 * @n: a value of type integer
 *
 * description: this function creates a new node and adds it to the
 * beginning of a linked list
 *
 * Return: a pointer to the head of the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
