#include "main.h"
/**
 * _print_rev_recursion- Prints the reverse of a string
 * @s: The string to be measured
 * Return: zero
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

