#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a node to the end of a linked list
 * @head: a reference pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Description: this function is passed a reference to the head of
 * a doubly linked list and a data of type integer. It creates
 * a node with the data and adds this new node to the end of the
 * linked list.
 *
 * Return: pointer to the new element, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newNode;
	newNode->prev = tmp;

	return (newNode);
}
