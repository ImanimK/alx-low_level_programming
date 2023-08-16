#include "main.h"
#include <unistd.h>
#include <stdio.h>
int add(int a, int b);

int main(void)
{
    int num1 = 5;
    int num2 = 10;
    int sum = add(num1, num2);

    _putchar(sum + '0');
    _putchar('\n');

    return 0;
}

int add(int a, int b)
{
    return a + b; // Return the sum of the two integers
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
