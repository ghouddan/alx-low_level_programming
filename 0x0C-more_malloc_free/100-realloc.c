#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
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
     new_ptr = malloc(new_size);
     if (new_ptr == NULL)
         return (NULL);
     for (i = 0; i < old_size; i++)
     {
         *((char *)new_ptr + i) = *((char *)ptr + i);
     }
     free(ptr);
     return (new_ptr);


}
