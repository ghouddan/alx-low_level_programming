#include "main.h"
/**
 * _memcpy - Brief description of the function.
 * @dest : array to print
 * @n : numbers of bytes
 * @src : source array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_memcpy(char *dest, char *src, unsigned int n){
unsigned int i;
i = 0;
while (i < n)
{ 
dest[i] = src[i];
i++;
}
return (dest);
}
