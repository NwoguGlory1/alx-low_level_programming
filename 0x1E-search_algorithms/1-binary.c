#include "search_algos.h"

/**
 * print_array - Prints an array between two boundaries
 * @array: pointer to the first element of the array to print
 * @min: left boundary
 * @max: right boundary
 *
 * Return: No Return
 */
void print_array(int *array, int min, int max)
{
	int i;

	for (i = min; i < max; i++)
		printf("%d, ", array[i]);
		/** prints ith element comma & space*/
	printf("%d\n", array[i]);
	/** prints the last elemeent at max -1*/
}

/**
 * binary_search - Function that searches foe a value in an algorithm
 * using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, mid;

	if (array == NULL)
	{
		return (-1);
	}

	i = 0;
	j = size - 1;

	while (i <= j)
	{
		printf("Searching in array: ");
		print_array(array, i, j);
		/** calls the print_array function, passing array, i as min, j as max*/
		mid = (i + j) / 2;

		if (array[mid] < value)
		{
			j = mid - 1;
		}
		else if (array[mid] > value)
		{
			i = mid + 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}
