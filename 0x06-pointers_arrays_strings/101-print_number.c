#include "main.h"
/**
 * print_number -  Brief description of the function.
 * @n : number to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
