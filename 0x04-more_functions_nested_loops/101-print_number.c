#include "main.h"
/**
 * print_number - Brief description of the function.
 * @n : input of the function
 * Return: Description of the return value.
 */
void print_number(int n)
{
unsigned int n1;
if (n < 0)
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}
if (n1 / 10)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
