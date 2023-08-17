#include "main.h"
/**
 * more_numbers - Brief description of the function.
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void more_numbers(void)
{
int i;
int j;
i=0;
while (i < 10)
{
for (j = 0; j < 15; j++)
{
if (j > 10)
{
_putchar('1');
}
_putchar(j % 10 + '0');
}
i++;
putchar('\n');
}
}
