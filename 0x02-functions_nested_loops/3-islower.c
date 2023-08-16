#include "main.h"
/**
* _islower - checks lowercase character
* @c: is the char to be checked
* return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

