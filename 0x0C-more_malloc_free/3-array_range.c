#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
    int *array;
    int i, size;

    if (min > max)
        return (NULL);

    size = (max - min) + 1;
    array = malloc(size * sizeof(int));

    if (array == NULL)
        return (NULL);

    for (i = min; i <= max; i++)
        array[i - min] = i;

    return (array);
}
