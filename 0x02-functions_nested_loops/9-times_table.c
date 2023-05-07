#include "main.h"
/**
 * times_table -prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
/** iterate ist nos a from 0till 9 and iterates for each value of a as as b */
	int a, b, op;

	for (a = 0; a <= 9; a++)

		_putchar(48); /**print digit 0 on ist row of the table.48=0 ASCII */

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
