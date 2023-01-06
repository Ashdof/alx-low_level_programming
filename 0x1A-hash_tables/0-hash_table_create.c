#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the table to create
 *
 * Description: this function creates a new hash table to the size
 * specified by the parameter size
 *
 * Return: a pointer to the new table or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
