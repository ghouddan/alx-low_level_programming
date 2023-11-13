#include "main.h"
/**
 * _strstr - Brief description of the function.
 * @haystack : array to print
 * @needle : source array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
for (i = 0; haystack[i] != '\0'; i++)
{
j = 0;
while (needle[j] != '\0' && haystack[i + j] == needle[j])
{
j++;
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (0);
}
