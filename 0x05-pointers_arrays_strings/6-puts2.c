#include "main.h"
/**
 * puts2 - Brief description of the function.
 * @str : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}

