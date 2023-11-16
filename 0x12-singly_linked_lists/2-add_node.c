#include "lists.h"

/**
 * add_node - add node to the beginning
 * @head: a reference pointer to the linked list
 * @str: a pointer to the string to store in the node
 *
 * description: this function computes the length of the string str,
 * creates a node and adds necessary data. It then adds the new node
 * to the beginning of the linked list.
 *
 * Return: the address of the new node, or a null pointer if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	int size;
	list_t *node;
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
	node->next = *head;
	*head = node;

	return (node);
}
