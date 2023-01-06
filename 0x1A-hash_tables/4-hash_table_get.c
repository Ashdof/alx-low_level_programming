#include "hash_tables.h"

/**
 * hash_table_get - search for a value with a given key
 * @ht: a reference to the hash table to search in
 * @key: the key of the associated value to search for
 *
 * Description: this function searches for a particular value given
 * its key and returns it if found
 *
 * Return: the value if found or NULL if it fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
