#include "main.h"

void times_table(void);

int main(void)
{
    times_table();
    return (0);
}

void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;
            
            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result >= 10)
            {
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            else
            {
                _putchar(' ');
                _putchar(result + '0');
            }
        }
        _putchar('\n');
    }
}

int _putchar(char c)
{
    /* Your _putchar implementation here */
    /* This function should output a single character */
    return write(1, &c, 1);
}
