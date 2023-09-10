#include <stdio.h>
/**
 * main - enrty point
 *
 * discreption: printing all leeters but two
 * Return: Always (0) success
 */
int main(void)
{
int m;
for (m = 'a'; m <= 'z'; m++)
if (m != 'q' && m != 'e')
putchar(m);
putchar('\n');
return (0);
}
