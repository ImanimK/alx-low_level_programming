#include "main.h"
#include <stdio.h>

void print_to_98(int n);

int main(void)
{
    int startNumber = 5;
    print_to_98(startNumber);

    return 0;
}

void print_to_98(int n)
{
    if (n <= 98)
    {
        for (int i = n; i <= 98; i++)
        {
            printf("%d", i);
            if (i != 98)
            {
                printf(", ");
            }
        }
    }
    else
    {
        for (int i = n; i >= 98; i--)
        {
            printf("%d", i);
            if (i != 98)
            {
                printf(", ");
            }
        }
    }

    printf("\n");
}