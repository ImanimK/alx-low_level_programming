#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: Index of the first element for which cmp doesn't return 0
 *         If no element matches, return -1
 *         If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
	int i;

	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]))
		return (i);
		}
	}

	return (-1);
}
