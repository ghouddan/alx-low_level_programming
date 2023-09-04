#include "main.h"
#include <stdlib.h>
/**
 * create_array - Brief description of the function.
 * @size : size of array
 * @c : character to fill the array with
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i;
if (size ==0)
{
return (0);
}
tab = malloc(1 * size);
if (tab == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
}
