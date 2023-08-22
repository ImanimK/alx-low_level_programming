#include "main.h"
/**
 *_strlen - checks length of string
 *@s:pointer to the string
 *Return:length of string
 */

int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')

	{
	length++;
	s++;
	}
return (length);

}
