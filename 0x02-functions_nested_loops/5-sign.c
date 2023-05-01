#include "main.h"
#include <stdio.h>

/**
* print_sign - Prints the sign of a number.
* @n: The number to be checked before any sign is printed.
*
* Return: 1 and prints + if greater than zero, 0 and prints 1 if it's zero,
 * -1 and print - if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	putchar('0');
	return (0);
	}
	else
	{
	putchar('-');
	return (-1);
	}
}
