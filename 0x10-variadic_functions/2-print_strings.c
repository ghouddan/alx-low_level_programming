#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *  print_strings - Description of the function.
 * @separator : separetor between numbers
 * @n : number of argument
 * @...: Description of the variadic arguments.
 *
 * Return: Description of the return value (if applicable).
 */
void  print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
