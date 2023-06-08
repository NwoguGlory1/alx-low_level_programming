#include "lists.h"

/**
 * sum_listint- returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: sum of all data in list
 * if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != 0)
	{
		sum += temp->n;
		temp  = temp->next;
	}

	return (sum);
}
