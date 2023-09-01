#include "main.h"
/**
 * _puts - Brief description of the function.
 * @s : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void _puts(char *s)
{
int i;
i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
