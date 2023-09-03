#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	while (*str)
	{
	putchar(*str);
	str++;
	}
}
