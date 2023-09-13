#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Brief description of the function.
 * @array : array to shearch in
 * @size : number of element
 * @cmp : function to compere
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, j = 0;
if (size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
j++;
}
}
if (j == 0)
{
return (-1);
}
}
return (0);
}
