#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print in reverse
 * Return: 0 (Success)
 */

int main(void)
{
char low_alpha;
for (low_alpha = 'z'; low_alpha >= 'a'; low_alpha--)
putchar(low_alpha);
putchar('\n');
return (0);
}
