#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node, starting at 0
 * Return: nth node of a linked list
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nth_node = head;

	for (i = 0; nth_node != NULL && i < index; i++)
	{
		nth_node = nth_node->next;
	}
		return (nth_node);
}
