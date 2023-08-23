#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the set of bytes to search for.
 *
 * Return: Pointer to the first occurrence in @s of
 * any byte from @accept,
 *  or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *check = accept;

	while (*check != '\0')
		{
		if (*s == *check)
			{
			return (s);
			}
		check++;
		}

	s++;
	}

    return (NULL);
}
