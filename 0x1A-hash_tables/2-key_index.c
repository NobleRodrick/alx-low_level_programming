#include "hash_tables.h"

/**
 * key_index - fnction gets us the index of inputted key
 * @key: the defined key (string) to hash
 * @size: hash table size
 *
 * Return: gives index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
