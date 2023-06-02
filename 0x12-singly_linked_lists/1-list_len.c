#include <stdio.h>
#include "lists.h"
/**
 * list_len- function that returns number of elements in a linked list_t list
 * @h: Pointer to the head or starting node of the linked list
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
