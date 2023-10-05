#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees passed grid
 * @grid: array to be freed
 * @height: number of rows to be freed
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
