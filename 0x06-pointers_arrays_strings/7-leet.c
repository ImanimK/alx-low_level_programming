#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: A pointer to the resulting encoded string
 */
char *leet(char *str)
{
	char leet_table[5][2] = {
	{'a', '4'},
	{'e', '3'},
	{'o', '0'},
	{'t', '7'},
	{'l', '1'}
				};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
		if (str[i] == leet_table[j][0] || str[i] == leet_table[j][0] - 'a' + 'A')
		str[i] = leet_table[j][1];
		}
	}

	return (str);
}
