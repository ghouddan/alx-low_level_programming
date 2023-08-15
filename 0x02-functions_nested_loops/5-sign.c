#include "main.h"
/**
 * print_sign - Brief description of the function.
 * @n : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
if (n > 0)
{
_putchar('+');
return (1);
}
{
if (n == 0)
_putchar('0');
return (0);
}
return (0);
}
