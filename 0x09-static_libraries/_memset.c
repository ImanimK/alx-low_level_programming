#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed by s with b.
 * @s: Pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
