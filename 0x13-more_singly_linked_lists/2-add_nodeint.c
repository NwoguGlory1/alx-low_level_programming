#include "lists.h"

/**
 * add_nodeint- function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node or NULL if its the last node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) {
		return (NULL);
	}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
}
