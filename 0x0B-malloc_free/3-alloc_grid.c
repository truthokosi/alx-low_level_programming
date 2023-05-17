#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - to print a two-dimensional array of integers
  *@width: how many ints wide
  *@height: how many ints high
  *Return: the array result, else NULL
  */

int **alloc_grid(int width, int height)
{
int a, b, i, j;
int **t;

if (width <= 0 || height <= 0)
return (NULL);

t = malloc(sizeof(int *) * height);

if (t == NULL)
{
free(t);
return (NULL);
}
for (a = 0; a < height; a++)
{
t[a] = malloc(sizeof(int) * width);

if (t[a] == NULL)
{
for (b = a; b >= 0; b--)
{
free(t[b]);
}
free(t);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
t[i][j] = 0;
}
}
return (t);
}
