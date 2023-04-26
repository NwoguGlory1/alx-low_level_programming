#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: 0 (Success)
 */

int main(void)
{
int low_base16;
while (low_base16 <= '9')
{
putchar(low_base16);
low_base16++;
}
low_base16 = 'a';
while (low_base16 <= 'f')
{
putchar(low_base16);
low_base16++;
}
putchar('\n');
return (0);
}
