#include "main.h"

/**
 * wildcmp - Compares two strings with wildcards for pattern matching.
 * @s1: The first string.
 * @s2: The second string with wildcards (*).
 *
 * Return: 1 if strings match, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}

	if (*s2 == '*')
	{
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2 || *s2 == '?')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
