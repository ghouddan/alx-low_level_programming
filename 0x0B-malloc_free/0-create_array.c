#include "main.h"
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
int i;
if (size ==0)
{
return (NULL);
}
tab = malloc(1 * size);
if (tab == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (tab);
}
