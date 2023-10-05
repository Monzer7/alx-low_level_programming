#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - intiliaze two dimentional matrix
 * @width: the number of rows
 * @height: number of culumns
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;

if (height <= 0 || width <= 0)
return (NULL);

grid = malloc(sizeof(int*) * height);

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
}
if (grid[i] == NULL)
return (NULL);


for (i = 0; i < width; i++)
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}

return (grid);
}
