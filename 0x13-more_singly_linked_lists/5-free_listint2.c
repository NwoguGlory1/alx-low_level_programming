#include "lists.h"

/**
 * free_listint2- function that frees a listint_t list
 * @head: Pointer to the linked list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
