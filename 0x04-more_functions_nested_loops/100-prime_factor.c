#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;

	while (num > 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
		}
		else
		{
			divisor++;
		}
		if (divisor > sqrt(num))
		{
			divisor = num;
		}
	}

	printf("%ld\n", divisor);

	return (0);
}

