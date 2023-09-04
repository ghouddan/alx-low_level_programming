#include "main.h"
#include <stdlib.h>
/**
 * str_conct - Brief description of the function.
 * s2 : string 2
 * @s1 : string 1
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *str_concat(char *s1, char *s2)
{
int i;
int j;
int k;
char *result;
if (s1 == NULL) {
s1 = "";
}
if (s2 == NULL) {
s2 = "";
}
k = 0;
i = 0;
j = 0;
while (s1[i])
{
i++;
}
while (s2[j])
{
    j++;
}
result = malloc((i + j + 1) * sizeof(char));
if(result == 0)
{
return (0);
}
for (i = 0; s1[i] != '\0'; i++)
{
result[i] = s1[i];
}
while (s2[k])
{
result[i + k] = s2[k];
k++;
}
result[i + k] = '\0';
return (result);
}
