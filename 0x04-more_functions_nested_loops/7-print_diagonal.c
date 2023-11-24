#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the no of times the character \ should be printed
 * Return: the diagonal ending with a \n
 * only a \n if n is <= 0
 */
void print_diagonal(int n)
{
	int j = 0;
	int i;

	while (i > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		_putchar('\n');
}
