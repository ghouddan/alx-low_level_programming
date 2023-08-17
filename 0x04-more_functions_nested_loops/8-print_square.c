#include "main.h"
/**
 * print_line - Brief description of the function.
 * @n : size of the square
 */
void print_square(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j < n; j++)
{
if(i != j)
{
_putchar('#');
}
else{
_putchar('\n'); 
}
}
}
}
else
_putchar('\n');
}
