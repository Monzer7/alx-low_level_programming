#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print combinationn of numbers
 * Return: Always 0 success
 */
int main(void)
{
int m;
int n;
for (m = 0 ; m <= 9 ; m++)
putchar(m + 48);
for (n = 0 ; m <= 0 ; n++)
if (n != m)
{
putchar(n + 48);
putchar(',');
putchar(' ');
}
if (n != 9 && m != 9)
putchar('\n');
return (0);
}
