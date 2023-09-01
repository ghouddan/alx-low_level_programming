#include "main.h"
/**
 * _strcpy - Brief description of the function.
 * @src : source
 * @dest : destination
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strcpy(char *dest, char *src)
{
int j;
int size;
j = 0;
size = 0;
while (src[size])
{
size++;
}
while (j <= size)
{
dest[j] = src[j];
j++;
}
return (dest);
}
