#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: a reference pointer to the linked list
 * @index: index at which to delete node
 *
 * Description: this function is passed via arguments a reference
 * to the head of a linked list and an unsigned int value. It uses
 * the int value as an index to delete a node at that index position
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	currentNode = *head;
	if (index == 0)
	{
		*head = currentNode->next;

		if (currentNode->next != NULL)
		{
			currentNode->next->prev = NULL;
		}

		free(currentNode);

		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (currentNode->next == NULL)
			return (-1);

		currentNode = currentNode->next;
	}

	currentNode->prev->next = currentNode->next;
	if (currentNode->next != NULL)
		currentNode->next->prev = currentNode->prev;

	free(currentNode);

	return (1);
}
