#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max);

int *array_range(int min, int max)
{
	int *arr;
	int size, value;
	int i;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	return (NULL);

	value = min;

	for (i = 0; i < size; i++, value++)
	arr[i] = value;

	return (arr);
}
