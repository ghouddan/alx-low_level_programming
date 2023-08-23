#include "main.h"
/**
 * _strcat - Brief description of the function.
 * @src : string to concatanat
 * @dest : caracter to print
 * @n : number of byte form src
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strncat(char *dest, char *src, int n)
{
int size1, size2, i;
size2 = 0;
size1 = 0;
while (dest[size1])
{
size1++;
}
while (src[size2])
{
size2++;
}
for (i = 0; i < n; i++)
{
dest[size1 + i] = src[i];
}
return (dest);
}
