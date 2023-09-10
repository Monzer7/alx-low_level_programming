#include <stdio.h>
/**
 * main - entry point
 *
 * Discreption: lower and upper cases
 * Return: Always (0) success
 */
int main(void)
{
char m;
char M;
for (m = 'a' ; m <= 'z' ; m++)
putchar(m);
for (M = 'A'; M <= 'Z'; M++)
putchar(M);
putchar('\n');

return (0);
}
