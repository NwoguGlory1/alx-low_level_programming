#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number- tells if input integer is a prime number or not
 * @n: input integer
 * Return: 1 if n is a prime number or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime- tells if a number is prime recursively
 * @n: input integer to evaluate
 * @i: iterator
 * Return: 1 if n is a prime number or 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime(n, i - 1));
}
