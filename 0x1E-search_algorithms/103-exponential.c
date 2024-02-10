# include "search_algos.h"

/**
* print_arrayEx - Prints an array between two boundaries
* @array: pointer to the first element of the array to print
* @min: left boundary
* @max: right boundary
*
* Return: No Return
*/
void print_arrayEx(int *array, int min, int max)
{
	int i;

	for (i = min; i < max; i++)
	{
		printf("%d, ", array[i]);
		/** prints ith element comma & space*/
	}
	printf("%d\n", array[i]);
	/** prints the last elemeent at max - 1*/
}


/**
 * binary_searchEx - Function that searches foe a value in an algorithm
 * using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_searchEx(int *array, int min, int max, int value)
{
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (min <= max)
	{
		printf("Searching in array: ");
		print_arrayEx(array, min, max);
		mid = (min + max) / 2;

		if (array[mid] < value)
		{
			min = mid + 1;
		}
		else if (array[mid] > value)
		{
			max = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	int high;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	i = i * 2;
	}

	if ((size - 1) < i)
	high = size - 1;
	else
	high = i;

	printf("Value found between indexes [%lu] and [%d]\n", i / 2, high);
	return (binary_searchEx(array, i / 2, high, value));
}
