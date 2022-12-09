#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a reference pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Description: this function inserts a node at the given position
 * The position is passed via argument in idx
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *nextNode, *currentNode;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		currentNode = *h;
		for (i = 0; i < idx - 1 && currentNode != NULL; i++)
			currentNode = currentNode->next;

		if (currentNode == NULL)
			return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		nextNode = *h;
		*h = newNode;
		newNode->prev = NULL;
	}
	else
	{
		newNode->prev = currentNode;
		nextNode = currentNode->next;
		currentNode->next = newNode;
	}

	newNode->next = nextNode;
	if (newNode->next != NULL)
		newNode->next->prev = newNode;

	return (newNode);
}
