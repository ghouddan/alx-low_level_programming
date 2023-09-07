#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Brief description of the function.
 * @s1 : string 1
 * @s2 : string 2;
 * @n : number of bytes of the string 2
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *string;
i = 0;
j = 0;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
string = malloc((j + i + 1) * sizeof(char));
if (string == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
string[i] = s1[i];
}
for (j = 0; j<= n; j++)
{
    string[i+j] = s2[j];
}
 string[i+j] = '\0';
return (string);
}
