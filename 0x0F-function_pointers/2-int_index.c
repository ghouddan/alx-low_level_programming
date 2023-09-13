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
int i;
if (array == NULL && size <= 0 && cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(*(array + i)) != 0)
{
return (i);
}
}
return (-1);
}
