#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: 0 (Success)
 */

int main(void)
{
char low_base16;
for (low_base16 = 0; low_base16 <= 9; low_base16++)
putchar(low_base16);
for (low_base16 = 'a'; low_base16 <= 'f'; low_base16++)
putchar(low_base16);
putchar('\n');
return (0);
}
