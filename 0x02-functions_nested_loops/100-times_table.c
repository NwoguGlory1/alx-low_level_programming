#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: natural numbers
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++}
			{
				c = a * b;
				if (b == 0)
				{
				putchar(c + '0');/*to convert c to a character, ASCII*/
				}
				else if (c < 10 && b != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((c / 10) + '0');
					putchar((c % 10) + '0');
				} else if (c >= 100 && b != 0)
				{
					putchar(',');
					putchar(' ');
					putchar((c / 100) + '0');
					putchar(((c / 10) % 10) + '0');
					putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
