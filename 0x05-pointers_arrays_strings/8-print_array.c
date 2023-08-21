#include "main.h"
#include <stdio.h>
/**
 * print_array - Brief description of the function.
 * @n : array size
 * @a : caracter to print
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
