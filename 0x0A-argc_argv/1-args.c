#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{

	int count;

	(void)argv;
	count = argc - 1;
	_putchar(count + '0');
	_putchar('\n');
	return (0);
}
