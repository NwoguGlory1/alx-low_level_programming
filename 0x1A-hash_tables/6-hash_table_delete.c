#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h_node, *temp;
	unsigned long int i;

	if (ht != 0)
		return;
	for (i = 0; i < (ht->size); i++)
	{
		h_node = ht->array[i];
		while (h_node)
		{
			temp = h_node->next;
			free(h_node->key);
			free(h_node);
			h_node = temp;
		}
	}
	free(ht->array);
	free(ht);
}

