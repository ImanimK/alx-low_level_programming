#include "main.h"
#include <stdio.h>
/**
* main - check the code*
* Return: Always 0.
*/
int main(void)
{
char *n = "12345678924345743678235745756784776857856456858768767745
86734734563456453743756756784458";
char *m = "90347906634706972346829145693462596349586932465973246597
62347956349265983465962349569346";
char r[100];
char r2[10];
char r3[11];
char *res;
res = infinite_add(n, m, r, 100);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
n = "1234567890";
m = "1";
res = infinite_add(n, m, r2, 10);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}n = "999999999";
m = "1";
res = infinite_add(n, m, r2, 10);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
res = infinite_add(n, m, r3, 11);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
return (0);
}
