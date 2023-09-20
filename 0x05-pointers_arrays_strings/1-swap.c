#include"main.h"
/**
 * swap_int - swap to var values
 * Description: it passes the value of the first
 * var into the value of the second and vise versa
 *
 * @a: first var of swapping
 * @b: second var of swapping
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
return;
}
