#include "main.h"
 /**
 * sqr - Brief description of the function.
 * @n : number to find the sqr of
 * @i : to check for the sqr
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int sqr(int n, int i);
 /**
 * _sqrt_recursion - Brief description of the function.
 * @n : number to find the sqr of
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqr(n, 0));
} 
int sqr(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqr(n, i + 1));
}
