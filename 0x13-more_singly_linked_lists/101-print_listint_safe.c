#include "lists.h"

/**
 * print_listint_safe - print a linked list safely
 * @head: a pointer to the head of the linked list
 *
 * description: this function safely prints the elements of a linked
 * list, which includes a loop
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = head;
	size_t nodes, i;

	if (p == NULL)
		return (0);

	nodes = countUniqueNodes(&p);
	if (nodes == 0)
	{
		while (p != NULL)
		{
			nodes++;
			printf("[%p] %d\n", (void *) p, p->n);
			p = p->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *) p, p->n);
			p = p->next;
		}

		printf("-> [%p] %d\n", (void *) p, p->n);
	}

	return (nodes);
}

/**
 * countUniqueNodes - count number of unique nodes
 * @head: a pointer to the head of the linked list
 *
 * description: this function computes the number of unique nodes in
 * a linked list with a loop
 *
 * Return: number of unique nodes, 0 otherwise
 */

size_t countUniqueNodes(const listint_t **head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if ((*head)->next == NULL)
		return (0);

	slow = *head;
	fast = (*head)->next->next;

	while (fast)
	{
		nodes++;
		if (slow == fast)
		{
			slow = *head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
