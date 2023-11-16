#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: a reference pointer to the first node of the linked list
 * @str: a pointer to the string to store in the node
 *
 * description: this function computes the length of the string str,
 * creates a node and adds necessary data. It then adds the new node
 * to the end of the linked list
 *
 * Return: a pointer to the new node or a null pointer if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int size;
	list_t *node, *ptr;
	char *s;

	s = strdup(str);
	if (s == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	for (size = 0; s[size] != '\0'; size++)
		;
	
	node->str = s;
	node->len = size;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}

	return (*head);
}
