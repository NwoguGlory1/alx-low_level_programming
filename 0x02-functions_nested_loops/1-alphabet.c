#include "main.h"

/**
*print_alphabet - prints alphabets in lowercase.
*Description: prints alphabets in lowercase using  _putchar function.
* Return: Always 0 (Success)
*/

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	_putchar(letter);

_putchar('\n');
}
