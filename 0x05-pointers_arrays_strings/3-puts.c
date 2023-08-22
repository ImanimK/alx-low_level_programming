#include "main.h"
/**
 *_puts(char *str) - prints a string, followed by a new line, to stdout.
 *@str:pointer to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
