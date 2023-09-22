#include "main.h"
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

int i = 0;/* var for *a */
int j;/* temperorary var for saving vars*/
int m = n - 1;/* var for array size*/
while (i < m)
{
j = *(a + i);
*(a + i) = *(a + m);
*(a + m) = j;
i++, m--;
	}
}
