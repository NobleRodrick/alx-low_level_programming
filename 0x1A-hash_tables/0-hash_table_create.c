#include "hash_tables.h"

/**
 * hash_table_create - We are thereby craeting our hash table
 * @size: precising the size of our hash table
 *
 * Return: returns pointer to our table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_head;

	if (size == 0)
		return (NULL);

	table_head = calloc(1, sizeof(hash_table_t));
	if (table_head == NULL)
		return (NULL);

	table_head->size = size;
	table_head->array = calloc(size, sizeof(hash_node_t *));
	if (table_head->array == NULL)
	{
		free(table_head);
		return (NULL);
	}
	return (table_head);
}
