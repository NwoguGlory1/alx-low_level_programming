#include "main.h"
/**
 * times_table -prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
/** iterate the first numbers, from 0 using variable a, andfor each value of a, iterate through the next 9 numbers from 1 and store the product of a and b in op */
	int a, b, op;

	for (a = 0; a <= 9; a++)

		_putchar(48); /** print digit 0 on the first row of the multipliaction table and this is before first value of b. 48 is 0 in ASCII */

	for (b = 1; b <= 9; b++)
	{
		op = a * b;
			_putchar(44);/** comma */
			_putchar(32); /** space */
			if (op <= 9)
			{
				_putchar(32);
				_putchar (op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
	}
	_putchar('\n');
	}

}
