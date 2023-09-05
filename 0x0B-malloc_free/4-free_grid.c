#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Brief description of the function.
 * @grid : the 2D array 
 * @height : height of the matrix
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
