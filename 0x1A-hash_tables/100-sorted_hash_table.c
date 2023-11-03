#include "hash_tables.h"

/**
 * sorted_list - function to insert new node in sorted list
 * @ht: pointer points to hash table
 * @new_node: the new node to insert
 *
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *sbucket = ht->shead;

	if (sbucket == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, sbucket->key) < 0)
		{
			new_node->snext = sbucket;
			new_node->sprev = sbucket->sprev;

			if (!sbucket->sprev)
				ht->shead = new_node;
			else
				sbucket->sprev->snext = new_node;
			sbucket->sprev = new_node;
			return;
		}
		sbucket = sbucket->snext;
	} while (sbucket);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_set - addz element to sorted hash table
 * @ht: pointer points to sorted hash table
 * @key: the designed element key
 * @value: value atributed to elementt
 *
 * Return: 1 in success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	char *value_copy, *key_copy;
	shash_node_t  *bucket, *new_node;

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
	new_node = calloc(1, sizeof(shash_node_t));
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
	sorted_list(ht, new_node);
	return (1);
}

/**
 * shash_table_create - creates a sorted hash table, as designed
 * by user
 * @size: table size
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * shash_table_get - get a defined value found on table
 * based on  certain defined key
 * @ht: hash table pointer
 * @key: key used to get value
 *
 * Return: the value, or null when not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int indx = 0;
	shash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[indx];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints all the key-value pair in the
 * array that makes up the hash table
 * @ht: hash table pointer
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int not_fin = 0;

	if (!ht)
		return;
	bucket = ht->shead;
	printf("{");
	while (bucket)
	{
		if (not_fin)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		not_fin = 1;
		bucket = bucket->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints the hash table key-value pairs
 * in arrays in the reversed order
 * @ht: pointer to hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int not_fin = 0;

	if (!ht)
		return;
	bucket = ht->stail;
	printf("{");
	while (bucket)
	{
		if (not_fin)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		not_fin = 1;
		bucket = bucket->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes all the elements found on the hash table
 * @ht: hash table pointer
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *bucket, *temp_free;
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
