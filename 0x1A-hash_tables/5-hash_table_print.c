#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 * Return: the hash table
 * nothing if ht is NULL.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hnode;
	int c = 0;
	unsigned long int i;


	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode)
		{
			if (c)
				printf(", ");
			printf("'%s': '%s'", hnode->key, hnode->value);
			hnode = hnode->next;
			c = 1;
		}
	}
	printf("}\n");
}
