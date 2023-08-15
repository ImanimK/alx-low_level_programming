#include "main.h"

int print_last_digit(int n);

int main(void)
{
    int number = 12345;
    int lastDigit = print_last_digit(number);

    _putchar(lastDigit + '0');
    _putchar('\n');

    return 0;
}

int print_last_digit(int n)
{
    int lastDigit = n % 10;

    if (lastDigit < 0)
    {
        lastDigit = -lastDigit; // Convert negative last digit to positive
    }

    _putchar(lastDigit + '0');
    return lastDigit;
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
