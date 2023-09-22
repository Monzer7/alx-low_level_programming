#include "main.h"
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

int i;
int j;
int m = n;
while (i < m)
{
j = *(a + i);
*(a + i) = *(a + m);
*(a + m) = j;
i++, j--;
	}
}
