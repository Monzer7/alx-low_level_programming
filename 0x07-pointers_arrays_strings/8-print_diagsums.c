#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagonal elements
 * @a: array to be summed
 * @size: shows the array dimention
 * return: is always 0
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int row, i;

for (row = 0; row < size; row++)
{
i = (row * size) + row;
sum1 = sum1 + a[i];
}
for (row = 1; row <= size; row++)
{
i = (row * size) - row;
sum2 = sum2 + a[i];
}
printf("%d, %d\n", sum1, sum2);
}
