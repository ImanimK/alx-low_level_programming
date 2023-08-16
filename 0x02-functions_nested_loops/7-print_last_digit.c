#include "main.h"
/**
 * print_last - prints the last digit of a number.
 * @n: the int to extract the last digit from
 * return: the value of the last digit
*/
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
	lastDigit = -lastDigit;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}

