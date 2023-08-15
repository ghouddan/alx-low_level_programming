#include <stdio.h>
/**
 * _islower - Brief description of the function.
 * @c : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void jack_bauer(void)
{
int i, j;
i = 0;
while (i < 24)
{
j = 0;
while (j < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
j++;
}
i++;
}
}
