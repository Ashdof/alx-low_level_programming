#include "lists.h"

/**
 * get_nodeint_at_index - get node at position
 * @head: a pointer to the head of the linked list
 * @index: the position at which to obtain the node
 *
 * description: this function returns the node at the given index
 *
 * Return: a pointer to node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0, len = 0;

	if (head == NULL)
		return (NULL);

	/* compute number of nodes */
	while (head != NULL)
	{
		len++;
		head = head->next;
	}

	/* check if node exists at the given index */
	if (len < index)
		return (NULL);

	/* search for node at given index */
	while (node != NULL && i != index)
	{
		i++;
		node = node->next;
	}

	return (node);
}
