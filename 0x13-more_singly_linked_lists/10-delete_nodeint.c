#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: a reference pointer to the head of a linked list
 * @index: the poisition at which to delete the node
 *
 * description: this function deletes the node at the given index
 *
 * Return: 1 if successufl, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev, *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = node = *head;
	prev = NULL;

	for (; node != NULL && i != index; i++)
		node = node->next;
	if (node == NULL)
		return (-1);

	for (; tmp != NULL && i != index; prev = tmp)
		tmp = tmp->next;

	if (tmp == NULL)
		return (-1); /* index node wasn't found */
	if (prev == NULL)
		*head = (*head)->next; /* index is first node */
	else
		prev->next = tmp->next;
	free(tmp);

	return (1);
}
