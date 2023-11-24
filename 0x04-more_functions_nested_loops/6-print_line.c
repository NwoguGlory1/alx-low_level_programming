#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character
 * Return: \n if n is 0 or less.
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('_');
		i++;
	}
	_putchar('\n');
}

