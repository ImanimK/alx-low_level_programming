#include "main.h"
#include <stdio.h>

#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
	if (result > INT_MAX / 10 ||
	(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))

			{
			if (sign == 1)
			return (INT_MAX);
			else
			return (INT_MIN);
			}

	result = result * 10 + (s[i] - '0');
		}
	else
		{
		break;
		}

		i++;
	}

    return (result * sign);
}

