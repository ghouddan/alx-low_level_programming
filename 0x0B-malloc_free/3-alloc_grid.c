#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Brief description of the function.
 * @width : width of the matrix
 * @height : height of the matrix
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **matrix;
i = 0;
j = 0;
if(width <= 0 && height <= 0)
{
return (0);
}
matrix = malloc(height * sizeof(int));
if(matrix == 0)
{
return (0);
}
for (i = 0; i < height; i++)
{
matrix[i] = malloc(width * sizeof(int));
if(matrix[i] == 0)
{
return (0);
}
for (j = 0; j < width; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
}
