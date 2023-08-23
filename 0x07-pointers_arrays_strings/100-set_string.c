#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer that will be set to @to.
 * @to: Pointer to a string that @s will point to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
