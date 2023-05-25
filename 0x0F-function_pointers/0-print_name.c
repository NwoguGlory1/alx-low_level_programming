#include <stdio.h>
/**
 * print_name- function that prints name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		printf("Invalid name\n");
		return;
	}
	else if (f == NULL)
	{
		printf("Invalid function pointer\n");
		return;
	}
	else
	{
	(f(name));
	}
}
