#include "main.h"
/**
 * reverse_array -  Brief description of the function.
 * @a : array to print
 * @n : size of array
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n; i++)
{
tmp = a[i];
a[i] = a[n - 1];
a[n - 1] = tmp;
n--;
}
}
