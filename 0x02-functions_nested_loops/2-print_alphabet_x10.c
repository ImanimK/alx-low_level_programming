#include "main.h"
#include <unistd.h>
#include <stdio.h>
void print_alphabet_x10(void);

int main(void)
{
    print_alphabet_x10();
    return 0;
}

void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
