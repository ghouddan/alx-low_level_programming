#include "main.h"
/**
 * _strcmp - Brief description of the function.
 * @s1 : string 1
 * @s2 : string 2
 * @n : number of byte form src
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int result;
i = 0;
while ((s1[i] != '\0') && (s2[i] != '\0'))
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
return (result);
}
i++;
}
return (s1[i] - s2[i]);
}
