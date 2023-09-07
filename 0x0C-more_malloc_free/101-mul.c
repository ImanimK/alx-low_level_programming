#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str);

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1 = 0, len2 = 0;
	int result_len;

	int *result;
	int i, j;
	int start;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (num1[len1] != '\0')
	len1++;
	while (num2[len2] != '\0')
	len2++;

	result_len = len1 + len2;

	result = calloc(result_len, sizeof(int));

	if (result == NULL)
	return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
	int carry = 0;
	int n1 = num1[i] - '0';

	for (j = len2 - 1; j >= 0; j--)
		{
		int n2 = num2[j] - '0';
		int product = n1 * n2 + result[i + j + 1] + carry;

		carry = product / 10;
		result[i + j + 1] = product % 10;
		}

	result[i] += carry;
	}

	start = (result[0] == 0) ? 1 : 0;

	for (i = start; i < result_len; i++)
	_putchar(result[i] + '0');

	_putchar('\n');
	free(result);
	return (0);
}

/**
 * is_digit - Checks if a string is composed of digits
 * @str: Input string
 * Return: 1 if composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
	char *ptr = str;

	if (ptr == NULL || *ptr == '\0')
	return (0);

	while (*ptr)
	{
	if (*ptr < '0' || *ptr > '9')
		return (0);
		ptr++;
	}
	return (1);
}
