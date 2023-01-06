#include "hash_tables.h"

/**
 * key_index - create the index of a key
 * @key: the element to create its index
 * @size: the size of the hash table
 *
 * Description: this function generates the index of a given key
 *
 * Return: the index;
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
