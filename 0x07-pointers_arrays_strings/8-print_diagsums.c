#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Brief description of the function.
 * @a : matrix
 * @size : size of the matrix
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
void print_diagsums(int *a, int size)
{
int sum2;
int i;
int sum1;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1,sum2);
}
