#include "main.h"

int _putchar(char c);

int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return 0;
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
