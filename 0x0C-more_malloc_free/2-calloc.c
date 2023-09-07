#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Brief description of the function.
 * @nmemb : number of element
 * @size :size of each element of the array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int total_size;
void *memory;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
memory = malloc(total_size);
if (memory == NULL)
{
return (NULL);
}
for (i = 0; i < total_size; i++)
{
*((char *)memory + i) = 0;
}
return (memory);
}
