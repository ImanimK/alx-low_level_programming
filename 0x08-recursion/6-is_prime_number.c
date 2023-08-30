#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime using recursion.
 * @n: The number to check.
 * @divisor: The current divisor to check divisibility with.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int n, int divisor)
{
	if (divisor <= 1)
	{
        return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	return (check_prime(n, divisor - 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (check_prime(n, n - 1));
}
