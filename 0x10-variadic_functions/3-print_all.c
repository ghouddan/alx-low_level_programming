#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - Description of the function.
 * @format : type of the varaible
 * @...: Description of the variadic arguments.
 *
 * Return: Description of the return value (if applicable).
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
char *separator;
int i, size, j;
separator = "";
i = 0, size = 0, j = 0;
va_start(args, format);
while (format[j] != '\0')
{
j++;
size++;
}
while (i < size)
{
switch (format[i])
{
case 'c':
	printf("%s%c", separator, va_arg(args, int));
	break;
case 'i':
	printf("%s%d", separator, va_arg(args, int));
	break;
case 'f':
	printf("%s%f", separator, va_arg(args, double));
	break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", separator, str);
break;
}
separator = ", ";
i++;
}
printf("\n");

va_end(args);
}

