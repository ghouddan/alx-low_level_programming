#include "main.h"
/**
 * _strcpy -  Brief description of the function.
 * @dest : array to print
 * @src : source array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
