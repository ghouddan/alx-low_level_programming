#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Brief description of the function.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of the string 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int i, j, lent1, lent2;
unsigned int allocSize;
i = 0;
j = 0;
lent1 = 0;
lent2 = 0;
if (s1 != NULL)
{
while (s1[lent1] != '\0')
{
lent1++;
}
}
if (s2 != NULL)
{
while (s2[lent2] != '\0')
{
lent2++;
}
}
if (n < lent2)
{
allocSize = lent1 + n + 1;
}
else
{
allocSize = lent1 + lent2 + 1;
}
string = malloc(sizeof(char) * allocSize);
if (!string)
{
return (NULL);
}
for (i = 0; s1 != NULL && i < lent1; i++)
{
string[i] = s1[i];
}
for (j = 0; (s2 != NULL) && (s2[j] != '\0') && (j < n); j++)
{
string[i + j] = s2[j];
}
string[i + j] = '\0';
return (string);
}
