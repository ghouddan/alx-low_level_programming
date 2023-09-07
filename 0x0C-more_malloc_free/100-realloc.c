#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Creates an array of integers from min to max (inclusive).
 * @ptr: data 
 * @old_size: the olde size of the data
 * @new_size : the new size of the data
 * Return: A pointer to the newly created array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
if (new_size == old_size)
    return (ptr);
if (new_size == 0 && ptr != NULL)
{
    free(ptr);
    return (NULL);
}
if (!ptr)
    return (malloc(new_size));
new_ptr = malloc(new_size);
if (new_ptr == NULL)
    return (NULL);
if (new_size > old_size)
{
    for (i = 0; i < old_size; i++)
{
  *((char *)new_ptr + i) = *((char *)ptr + i);
}
}
if (new_size < old_size)
{
    for (i = 0; i < new_size; i++)
  *((char *)new_ptr + i) = *((char *)ptr + i);
}
free(ptr);
return (new_ptr);
}
