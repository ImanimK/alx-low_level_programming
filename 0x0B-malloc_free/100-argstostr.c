#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The array of argument strings.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if it fails or if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	return (NULL);

	int total_length = 0;
	for (int i = 0; i < ac; i++)
		{
		if (av[i] != NULL)
			{
			int arg_length = 0;
			while (av[i][arg_length] != '\0')
			arg_length++;
			total_length += arg_length + 1;
			}
		}

	char *concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);

	int concat_index = 0;
	for (int i = 0; i < ac; i++)
		{
		if (av[i] != NULL)
			{
			int arg_index = 0;
			while (av[i][arg_index] != '\0')
				{
				concatenated[concat_index] = av[i][arg_index];
				concat_index++;
				arg_index++;
				}
			concatenated[concat_index] = '\n';
			concat_index++;
			}
		}

	concatenated[concat_index] = '\0';

	return (concatenated);
}
