#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

char generate_random_char()
{
	int random_num = rand() % 62;
	if (random_num < 26)
	{
	return ('A' + random_num);
	}
	 else if (random_num < 52)
	{
	return 'a' + (random_num - 26);
	}
	else
	{
	return '0' + (random_num - 52);
	}
}

int main()
{
srand(time(NULL));

char password[PASSWORD_LENGTH + 1];
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
	password[i] = generate_random_char();
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
