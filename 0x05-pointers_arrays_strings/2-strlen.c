#include "main.h"
/**
 * _strlen - Brief description of the function.
 * @s : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int _strlen(char *s)
{
int i;
i = 0;
while(s[i])
i++;
return (i);
}
