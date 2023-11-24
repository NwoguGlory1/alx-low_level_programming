#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: capacity of the hash table
 * Return: pointer to a newly created hash table or NULL if not.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}


	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}


	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
