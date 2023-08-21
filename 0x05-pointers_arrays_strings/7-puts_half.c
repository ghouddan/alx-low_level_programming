#include "main.h"
/**
 * puts_half - Brief description of the function.
 * @str : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void puts_half(char *str)
{
int size;
int i;
size = 0;
while (str[size])
{
size++;
}
if (size % 2 == 0)
{
for (i = size / 2; i < size; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (size + 1) / 2; i < size ; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
