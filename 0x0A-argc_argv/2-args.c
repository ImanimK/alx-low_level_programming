#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	_puts(argv[i]);
	}

	return (0);
}
