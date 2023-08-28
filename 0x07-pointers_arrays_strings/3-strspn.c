#include "main.h"
/**
 * _strspn - Brief description of the function.
 * @s: string
 * @accept : character to find
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int count;
count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (coun)t;
}
