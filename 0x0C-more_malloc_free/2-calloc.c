#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < total_size; i++)
	*((char *)ptr + i) = 0;

	return (ptr);
}
