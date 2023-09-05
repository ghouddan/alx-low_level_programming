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
if (width <= 0 || height <= 0)
{
return (0);
}
matrix = (int **)malloc(height * sizeof(int *));
if (matrix == 0)
{
return (0);
}
for (i = 0; i < height; i++)
{
matrix[i] = (int *)malloc(width * sizeof(int));
if (matrix[i] == 0)
{
for (j = 0; j < i; j++) {
free(matrix[j]);
}
free(matrix);
return NULL;

}
for (j = 0; j < width; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
}
