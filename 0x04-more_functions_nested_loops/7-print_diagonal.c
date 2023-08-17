#include "main.h"
/**
 * print_diagonal - Brief description of the function.
 * @n : number of time
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
putchar(92);
else if (j < i)
putchar(' ');
}
putchar('\n');
}
}
}
