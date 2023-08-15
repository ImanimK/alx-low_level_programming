#include "main.h"

int _islower(int c);

int main(void)
{
    char character = 'a';
    if (_islower(character))
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

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1; // Character is lowercase
    }
    return 0; // Character is not lowercase
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
