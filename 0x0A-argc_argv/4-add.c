#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - Checks if a string is a positive number
 * @str: The string to check
 * Return: true if positive number, false otherwise
 */
bool is_positive_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
		return (false);
		}
	str++;
	}
	return (true);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
		_puts("Error");
		return (1);
		}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
