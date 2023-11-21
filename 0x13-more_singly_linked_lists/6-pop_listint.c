#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: a reference pointer to the head node of a linked list
 *
 * description: this function delete the head node of a linked list
 *
 * Return: the value of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value = 0;

	if (*head == NULL)
		return (value);

	tmp = *head;
	*head = (*head)->next;
	tmp->next = NULL;
	value += tmp->n;
	free(tmp);

	return (value);
}
