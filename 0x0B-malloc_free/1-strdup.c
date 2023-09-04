#include <stdlib.h>
/**
 * _strdup - Brief description of the function.
 * @str : string to duplicate
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_strdup(char *str)
{
int lent;
char *duplicate;
if (str == 0)
{
return (NULL);
}
lent = sizeof(str);
duplicate = malloc ((lent + 1) * sizeof(char));
if (duplicate == 0)
{
return (0);
}
duplicate = str;
return (duplicate);
}
