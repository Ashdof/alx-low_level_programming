#include "lists.h"

/**
 * sum_listint - sum node elements
 * @head: a pointer to the head of the linked list
 *
 * description: this function adds up the elements of a linked list
 *
 * Return: sum of elements or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
