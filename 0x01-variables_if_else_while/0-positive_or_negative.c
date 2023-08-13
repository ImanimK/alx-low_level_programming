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

	srand(time(0)); /* Initialize random number generator based on current time */
	n = rand() - RAND_MAX / 2; /* Generate a random number and adjust to be centered at 0 */

	printf("The number %d is ", n);

	if (n > 0)
	{
		printf("positive\n"); /* Print if the number is greater than 0 */
	}
	else if (n == 0)
	{
		printf("zero\n"); /* Print if the number is equal to 0 */
	}
	else
	{
		printf("negative\n"); /* Print if the number is less than 0 */
	}

	return (0); /* Indicate successful completion of the program */
}

