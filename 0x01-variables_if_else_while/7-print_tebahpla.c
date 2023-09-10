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
m = 'z';
for (m = 'a' ; m <= 'z' ; m--)
putchar(m);
putchar('\n');
return (0);
}
