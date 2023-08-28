#include "main.h"
/**
 * _memset - Brief description of the function.
 * @s : mamory location
 * @b : caracter
 * @n : number of byte
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
while(i < n)
{
s[i] = b;
i++;
}
return (s);
}
