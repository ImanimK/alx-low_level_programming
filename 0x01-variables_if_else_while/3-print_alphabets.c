#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet, followed by
 * the uppercase alphabet, and then a new line character.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';


	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}


	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
