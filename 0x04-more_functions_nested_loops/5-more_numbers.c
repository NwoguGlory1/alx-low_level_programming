#include "main.h"

/**
 * more_numbers -  function that prints 0 to 14 ten times
 * followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar((i /10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
