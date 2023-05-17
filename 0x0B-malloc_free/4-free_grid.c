#include "main.h"
#include <stdlib.h>
/**
  *free_grid - to free a two-dimensional int grid previously
  * created with alloc_grid function
  *@grid: the grid previously created
  *@height: the grid height
  *Return: 0 for success
  */

void free_grid(int **grid, int height)
{
int t;

for (t = 0; t < height; t++)
{
free(grid[t]);
}
free(grid);
}
