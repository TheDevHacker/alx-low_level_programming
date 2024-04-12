#include "hash_tables.h"

/**
 * key_index - Gets the index at which a key/value.
 * @key: The key.
 * @size: the array size of the hash table.
 *
 * Return: The index number of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
