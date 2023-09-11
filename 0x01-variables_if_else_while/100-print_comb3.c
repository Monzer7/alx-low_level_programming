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
for (n = 0 ; n <= 9 ; n++)
putchar(m + 48);
putchar(n + 48);
putchar(',');
putchar(' ');

putchar('\n');
return (0);
}
