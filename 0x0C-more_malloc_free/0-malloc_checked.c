#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Brief description of the function.
 * @b : size of the memory
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == 0)
{
exit (98);
}
return (p);
}
