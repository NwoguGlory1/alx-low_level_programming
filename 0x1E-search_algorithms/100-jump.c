#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, a, i, b;


	if (array == NULL)
	{
		return (-1);
	}

	a = 0, b = 0;
	step = sqrt(size);

	while (a < size && array[a] < value)
	{
		printf("Value checked array[%lu] and [%d]\n", b, array[a]);
		b = a;
		a += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", b, a);

	if (a > (size - 1))
		a = size - 1;
	for (i = b; i <= a && array[i] <= value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
