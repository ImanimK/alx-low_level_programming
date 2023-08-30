#include "main.h"
#include <string.h>

/**
 * check_palindrome - checks if a string is a palindrome using recursion.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}

	if (s[start] != s[end])
	{
	return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
	return (1);
	}

	return (check_palindrome(s, 0, length - 1));
}
