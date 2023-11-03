#include "hash_tables.h"

/**
 * hash_table_set - sets or adds an element to hash table
 * @ht: hash table pointer
 * @key: key of the elemet to be added
 * @value: value of the candidate element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	char *value_copy, *key_copy;
	hash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[indx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = value_copy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;
	return (1);
}
