#include "lists.h"
/**
 * free_listint- function that frees a listint_t list
 * @head: listint_t list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
