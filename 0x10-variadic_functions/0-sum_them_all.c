#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Description of the function.
 * @n : number of argument
 * @...: Description of the variadic arguments.
 *
 * Return: Description of the return value (if applicable).
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int result;
result = 0;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
result += va_arg(args, int);
}
va_end(args);
return (result);
}
