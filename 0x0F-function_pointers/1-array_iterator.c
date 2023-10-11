#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - excute in each given elemnts
 * @array: arrray of elemnts
 * @size: size of array
 * @action: what to be exceted int the elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
unsigned int i;
for (i = 0; i < size; i++)
action(*(array + i));
}
else
return;
}
