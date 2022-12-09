#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: a reference to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Description: this function is passed a reference to the head of a
 * linked list along with an unsigned integer value. It then searches
 * for a node at the index position equivalent to the integer value
 * passed via its argument
 *
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
