#include "main.h"
#include <unistd.h>
#include <stdio.h>
int _isalpha(int c);

int main(void)
{
    char character = 'A';
    if (_isalpha(character))
    {
        _putchar('1');
    }
    else
    {
        _putchar('0');
    }
    _putchar('\n');

    return 0;
}

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; // Character is an alphabetic letter
    }
    return 0; // Character is not an alphabetic letter
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
