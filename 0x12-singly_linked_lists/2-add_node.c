#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node- Function that adds a new node to the beginning of a linked list
 * @head: Function that adds a new node to the beginning of a linked list
 * or starting node of the linked list
 * @str: Pointer to the string value to be added to the new node
 * Return: Pointer to the newly added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
