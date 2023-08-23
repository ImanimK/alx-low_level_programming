#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase in a string
 * @str: The input string
 *
 * Return: A pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';
	}

	return (str);
}
