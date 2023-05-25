#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator- executes a function as a parameter on each element of array
 * int *array: first parameter,is an array or pointer to array first element
 * @array: array
 * size_t size: second parameter, is the length of the array
 * @size: size of elements in array
 * (*action)(int): third parameter with 'action' pointer
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
