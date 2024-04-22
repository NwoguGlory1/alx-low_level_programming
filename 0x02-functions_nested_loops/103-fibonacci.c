#include <stdio.h>

/**
 * main - prints the sum of even numbers in Fibonacci value not > 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n1, n2, next, sum;

	n1 = 1;
	n2 = 1;
	next = 0;
	sum = 0;

	while (next < 4000000)
	{
		next = n1 + n2;

		if (next % 2 == 0)
			sum += next;

		n1 = n2;
		n2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}
