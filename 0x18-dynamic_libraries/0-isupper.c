#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper- function that checks for uppercase character.
 * @c: An integer representing the character to be tested
 * Return: a non-zero value if the character is uppercase
 * and  returns 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		return (0);
}
