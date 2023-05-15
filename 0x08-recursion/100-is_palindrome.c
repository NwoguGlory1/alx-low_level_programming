#include "main.h"
int check_if_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome- checks if a string is a palindrome or not
 * @s: string to reverse
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_if_pal(s, 0, _strlen_recursion(s)));
}

/**
 *  _strlen_recursion-returns the length of a string.
 * @s: The string to be measured
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_if_pal-checks string recursively if palindrome or not
 * @s: string to check
 * @i: iterator
 * @len:length of the string
 * Return:  if palindrome, 0 if not
 */
int check_if_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	else
		return (check_if_pal(s, i + 1, len - 1));
}
