#include "hash_tables.h"

/**
 * hash_djb2 - function computes the hash of a string using djb2
 * @str: target string
 *
 * Return: 64 bits hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int c;

	hash_value = 5381;
	while ((c = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + c; /* hash * 33 + c */
	}
	return (hash_value);
}
