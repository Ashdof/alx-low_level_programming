#include "lists.h"

/**
 * sum_dlistint - sum all of the data of a dlistint_t linked list
 * @head: a reference to the beginning of the linked list
 *
 * Description: this function computes for the sum of all data
 * of a linked list passed to it via argument
 *
 * Return: sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int ans = 0;

	while (head != NULL)
	{
		ans += head->n;
		head = head->next;
	}
	return (ans);
}
