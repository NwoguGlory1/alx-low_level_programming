#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: pointer to the first node in linked list
 * @n: given position where node should be added
 * @idx:the index of the list where the new node is added,
 * starts at 0
 * Return:the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t * newnode * temp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{

		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head

	for (i = 0; temp && i < idx; i++)
		temp = temp->next;

		if (!temp || i != idx - 1)
		{
			free(newnode);
			return (0);		
		}
			newnode->next = temp->next;
			temp->next = newnode;

			return (newnode);
}
