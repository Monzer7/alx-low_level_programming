#include <stdio.h>
/**
 * main - entry point
 *
 * Discreption: alphabet in reverse
 * Return: always 0 success
 */
int main(void)
{
char m;
for (m = 'z' ; m >= 'a' ; m--)
putchar(m);
putchar('\n');
return (0);
}
