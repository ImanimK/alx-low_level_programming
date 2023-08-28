#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (i = 0; i < size * size; i += size + 1)
	{
	sum_diag1 += a[i];
	}

	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
	sum_diag2 += a[i];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
