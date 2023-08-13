#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program uses the putchar function to print
 * the lowercase alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
