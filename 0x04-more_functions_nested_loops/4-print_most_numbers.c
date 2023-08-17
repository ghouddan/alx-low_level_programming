#include "main.h"
/**
 * print_most_numbers - Brief description of the function.
 * @i : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
