#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: Pointer to the beginning of the located
 * substring in @haystack,
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
