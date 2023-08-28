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
int i;
int j;
char *tmp;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
tmp = &s[i];
break;
}
}
if(accept[j] != '\0')
{
break;
}
}
return tmp;
}
