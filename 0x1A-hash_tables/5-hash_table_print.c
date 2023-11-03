/**
 * hash_table_print - this function prints the key-value pair
 * found in the array that makes up the HS table
 * @ht: table pointer
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *bucket;
	int bot_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			if (bot_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			bot_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
