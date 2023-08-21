#include "main.h"
/**
 * print_rev - Brief description of the function.
 * @s : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_rev(char *s)
{
int i;
int j;
i = 0;
while (s[i])
{
i++;
}
for(j = i; j >= 0; j--)
{
putchar(s[j]);
}
putchar('\n');
}

