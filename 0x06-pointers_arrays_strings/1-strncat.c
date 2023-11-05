#include "main.h"
/**
 * strncat -  function that concatenates two strings
 * @dest: first string
 * @src: resulting strin
 * @n: number of bytes from src
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		src++;
		ptr++;
	}

	*ptr = '\0';

	return (dest);
}
