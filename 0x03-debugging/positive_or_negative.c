#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and
 * determines if it's positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;

        srand(time(0)); /* Initialize random number generator */
        n = rand() - RAND_MAX / 2; /* Generate a random number */

        printf("%d is ", n);

        if (n > 0)
                {printf("positive\n"); }
        else if (n < 0)
                {printf("negative\n"); }
        else
                {printf("zero\n"); }

        return (0);
}
