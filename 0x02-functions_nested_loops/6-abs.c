#include "main.h"

int _abs(int n);

int main(void)
{
    int number = -10;
    int absValue = _abs(number);

    _putchar(absValue + '0');
    _putchar('\n');

    return 0;
}

int _abs(int n)
{
    if (n < 0)
    {
        return -n; // Return the negation of negative number
    }
    return n; // Return positive number as is
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
