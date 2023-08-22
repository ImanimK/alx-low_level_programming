#include "main.h"

/**
 * _puts_reverse - Prints a string in reverse, followed by a new line.
 * @str: Pointer to the string to be printed in reverse.
 */
void _puts_reverse(char *str)
{
	int length = 0;
	int i;
	while (str[length] != '\0')
	{
	length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}

