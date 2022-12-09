#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: a reference to a  pointer to the beginning of the linked
 * list
 * @n: value to add to the new node
 *
 * Description: this function is passed a reference to a point to the
 * head of a doubly linked list and a data value of type int. It then
 * adds the data to the beginning of the linked list
 *
 * Return: a reference to the new node, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;

	if (newNode->next != NULL)
		(newNode->next)->prev = newNode;

	return (newNode);
}
