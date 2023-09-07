#include "main.h"
#include <stdlib.h>

/**
 * array_range - Brief description of the function.
 * @min : first number
 * @max :last number
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int *array_range(int min, int max)
{
  int *array;
  int i, size, j = 0;
  if (min > max)
    return (NULL);
  size = (max - min) + 1;
  array = malloc(size * sizeof(int));
  if (array == NULL)
    return (NULL);
  for (i = min; i <= max; i++)
  {
    array[j] = i;
    j++;
  }
  return (array);
}
