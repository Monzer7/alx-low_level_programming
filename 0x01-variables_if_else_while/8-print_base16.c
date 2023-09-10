#include <stdio.h>
/**
 * main - entry point
 *
 * Discreption: all hexedecimal
 * Return: always 0 success
 */
int main(void)
{
char m;
char n;
for (m = 0 ; m <= 9 ; m++)
putchar(m);
for (n = 'a' ; n <= 'f' ; n++)
putchar(n);
putchar('\n');
return (0);
}
