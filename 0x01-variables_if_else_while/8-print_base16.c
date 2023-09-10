#include <stdio.h>
/**
 * main - entry point
 *
 * Discreption: all hexedecimal
 * Return: always 0 success
 */
int main(void)
{
int m;
char n;
for (m = 48 ; m <= 57 ; m++)
putchar(m);
for (n = 'a' ; n <= 'f' ; n++)
putchar(n);
putchar('\n');
return (0);
}
