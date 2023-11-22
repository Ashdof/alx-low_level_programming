#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a position
 * @head: a reference pointer to the head of a linked list
 * @idx: the position to insert the new node
 * @n: the value to store in the new node
 *
 * description: this function inserts a new node at the poisition idx
 *
 * Return: address of the new node or a null pointer if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}

	tmp = *head;
	for (; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL) /* idx > number of nodes */
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
