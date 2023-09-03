#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes, including null bytes.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
