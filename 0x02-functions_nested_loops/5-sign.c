#include "main.h"

int print_sign(int n);

int main(void)
{
    int number = 5;
    int result = print_sign(number);

    _putchar(result == 1 ? '+' : (result == 0 ? '0' : '-'));
    _putchar('\n');

    return 0;
}

int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return 1; // Positive number
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0; // Zero
    }
    else
    {
        _putchar('-');
        return -1; // Negative number
    }
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
