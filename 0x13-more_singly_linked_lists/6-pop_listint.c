#include "lists.h"

/**
 * pop_listint- function that deletes the head node of a listint_t linked list
 * @head: pointer to the pointer of the head node
 * Return: the head node's data(n)
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == 0 || *head == 0)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
