#include "main.h"
/**
 * factorial - Brief description of the function.
 * @n : numbers
 * Detailed description of what the function does.
 * Return: Description of the return value.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n *= factorial(n - 1));
}

