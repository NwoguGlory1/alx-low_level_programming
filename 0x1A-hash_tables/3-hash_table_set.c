#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. It cannot be an empty string.
 * @value: the value associated with the key. It must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_n, *current_item;

	if (ht == NULL || key == NULL || *key == '\0')
	return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
	{
		free(current_item->value);
	    current_item->value = strdup(value);
	if (current_item->value == NULL)
		return (0);
	return (1);
	}
	current_item = current_item->next;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
	{
	return (0);
	}
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
	free(new_n);
	return (0);
	}
	new_n->value = strdup(value);
	if (new_n->value == NULL)
	{
	free(new_n->key);
	free(new_n);
	return (0);
	}
	new_n->next = ht->array[index];
	ht->array[index] = new_n;
	return (1);
}
