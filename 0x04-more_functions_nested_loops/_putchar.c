#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: character to priint
 * Return: 1 on success
 * -1 on error and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
