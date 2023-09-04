#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);
	int i;

	if (argc != 2)
	{
	_puts("Error");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	for (i = 0; i < num_coin_values; i++)
	{
	coins += cents / coin_values[i];
	cents %= coin_values[i];
	}

	printf("%d\n", coins);
	return (0);
}
