#include "main.h"/**
 * swap_int - Brief description of the function.
 * @b : variable 2
 * @a : variable 1
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
 void swap_int(int *a, int *b)
{
int *tmp = *a;
*a = *b;
*b = tmp;
}
