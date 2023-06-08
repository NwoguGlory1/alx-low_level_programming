#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at a given index
 * @head: pointer to the head of the linked list
 * @index:  index of the node that should be deleted
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *nth_node = NULL;
	unsigned int i = 0;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp != 0 || (temp->next) != 0)
			return (-1);
		temp = temp->next;
		i++;
	}

	nth_node = temp->next;
	temp->next = nth_node->next;
	free(nth_node);

	return (1);
}

