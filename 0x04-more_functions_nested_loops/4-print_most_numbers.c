#include "main.h"

/**
 * print_most_numbersn-  function that prints the numbers, from 0 to 9
 * followed by a new line
 * Return: numbers 0to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
