#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: an input array
 * @n: an input integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i\n", a[i]);
	}
}
