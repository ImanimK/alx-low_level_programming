#include "main.h"

/**
 * _strncat - Concatenates n bytes from src to dest
 * @dest: The destination string
 * @src: The source string to be concatenated
 * @n: The maximum number of bytes to be concatenated from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	dest_len++;

	while (src[i] != '\0' && i < n)
	{
	dest[dest_len + i] = src[i];
	i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
