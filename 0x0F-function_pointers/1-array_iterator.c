#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - Brief description of the function.
 * @array : array to print
 * @size : size of array
 * @action : function to apply
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
