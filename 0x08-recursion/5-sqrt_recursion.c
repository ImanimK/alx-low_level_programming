#include "main.h"

/**
 * find_sqrt - Helper function to find the square
 * root using binary search.
 * @n: The number to find the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return: The square root of n, or -1 if not found.
 */
int find_sqrt(int n, int start, int end)
{
	if (start > end)
	{
	return (-1);
	}

    int mid = start + (end - start) / 2;

	if (mid * mid == n)
	{
	return (mid);
	}
	else if (mid * mid > n)
	{
	return (find_sqrt(n, start, mid - 1));
    	}
	else
	{
	return (find_sqrt(n, mid + 1, end));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (find_sqrt(n, 0, n));
	}
}
