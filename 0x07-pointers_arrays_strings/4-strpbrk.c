#include "main.h"
/**
 * _strpbrk - Brief description of the function.
 * @dest : array to print
 * @accept : source array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}
