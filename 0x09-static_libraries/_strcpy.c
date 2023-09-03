#include "main.h"

/**
 * _strcpy - Copies a string, including the null byte, to a buffer.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
