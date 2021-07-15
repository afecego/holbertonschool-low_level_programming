#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{

int **mat;
int x, y, k;

if (width <= 0 || height <= 0)

return (NULL);

mat = malloc(height * sizeof(int *));

if (mat == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
mat[x] = malloc(width * sizeof(int));

if (mat[x] == NULL)
{
for (k = 0; k < x; k++)
{
free(mat[k]);
}
free(mat);
return (NULL);
}
for (y = 0; y < width; y++)
{
mat[x][y] = 0;
}
}
return (mat);
}
