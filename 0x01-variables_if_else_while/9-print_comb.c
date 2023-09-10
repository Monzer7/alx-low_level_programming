#include <stdio.h>
/**
 * main - entry point
 *
 * Discreption: print number with commas
 * Return: always return 0 success
 */
int main(void)
{
	int m;
for (m = 0 ; m <= 9 ; m++)
{putchar(48 + m);
if (m != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
	return (0);
}
