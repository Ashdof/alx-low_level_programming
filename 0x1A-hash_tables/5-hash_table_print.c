#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: a pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}
		}
	}

	printf("}\n");
}
