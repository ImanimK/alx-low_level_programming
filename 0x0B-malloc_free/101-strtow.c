#include "main.h"
#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
    int word_count = 0;
    int i = 0;

    if (str == NULL || *str == '\0')
        return NULL;

    int word_index = 0;
    int word_length;
    int j;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        if (str[i] != '\0')
        {
            word_count++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    char **words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    i = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        if (str[i] != '\0')
        {
            int start = i;

            while (str[i] != ' ' && str[i] != '\0')
                i++;

            word_length = i - start;
            words[word_index] = malloc(sizeof(char) * (word_length + 1));
            if (words[word_index] == NULL)
            {
                for (j = 0; j < word_index; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

            strncpy(words[word_index], &str[start], word_length);
            words[word_index][word_length] = '\0';
            word_index++;
        }
    }

    words[word_index] = NULL;

    return (words);
}
