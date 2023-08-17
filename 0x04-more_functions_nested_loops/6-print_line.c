#include "main.h"/**
 * print_line - Brief description of the function.
 * @n : number of time
 * Return: Description of the return value.
 */
void print_line(int n)
{
int i;
if(n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
