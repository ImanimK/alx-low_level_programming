#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int prev = 1, current = 2, next;
    unsigned long int sum = 2;

    while (1)
    {
        next = prev + current;

        if (next > 4000000)
            break;

        if (next % 2 == 0)
            sum += next;

        prev = current;
        current = next;
    }

    printf("%lu\n", sum);

    return (0);
}
