#include "main.h"
/**
 * is_prime_number - Brief description of the function.
 * @n: number to determine
 * @i : number to check for prime
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int prime(int n, int i);
int is_prime_number(int n)
{
if (prime(n, 2) == n)
{
return (1);
}
else
{
return (0);
}
}
/**
 * prime - Brief description of the function.
 * @n: number to determine
 * @i : number to check for prime
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i * i > n)
{
return (n);
}
if (n % i == 0)
{
return (i);
}
return (prime(n, i + 1));
}
