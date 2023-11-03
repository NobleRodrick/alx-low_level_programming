#include "hash_tables.h"

/**
 * hash_table_delete - deletes all elemnets of the hash table using
 * the free funcyion
 * @ht: pointer to hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *temp_free;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			temp_free = bucket;
			bucket = bucket->next;
			if (temp_free->key)
				free(temp_free->key);
			if (temp_free->value)
				free(temp_free->value);
			free(temp_free);
		}
	}
	free(ht->array);
	free(ht);
}
