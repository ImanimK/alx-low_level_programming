#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
