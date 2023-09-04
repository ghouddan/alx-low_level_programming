#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Brief description of the function.
 * @str : string to duplicate
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strdup(char *str)
{
char *dup;
int i;
i = 0;
if (str == 0)
{
return (0);
}
while (str[i] != '\0')
{
i++;
}
dup =  malloc((i + 1) * sizeof(char));
if (dup == 0)
{
return (0);
}
for (i = 0; str[i] != '\0'; i++)
{
dup[i] = str[i];
}
return (dup);
}
