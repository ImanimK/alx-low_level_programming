#include "main.h"

/**
 * print_line - Draws a straight line using the character '_'
 * @n: The number of times '_' should be printed
 */
void print_line(int n)
{
	if (n <= 0)
    {
	_putchar('\n');
	return;
    }

	while (n > 0)
    {
	_putchar('_');
	n--;
    }

	_putchar('\n'); // Print a new line at the end
}
