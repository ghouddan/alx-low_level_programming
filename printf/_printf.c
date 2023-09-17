#include "main.h"
#include <stdarg.h>
/**
 * flage - Description of the function.
 * @format : type of the varaible
 * @args : argument list
 * @lent : kep traque of the argument passe
 * @...: Description of the variadic arguments.
 * Return: Description of the return value (if applicable).
 */
void flage(va_list args, const char forma, int *lent)
{
	if (forma == 'c')
		_putchar(va_arg(args, int), lent);
	if (forma == 's')
		_putstr(va_arg(args, char *), lent);
	if (forma == '%')
		_putchar(forma, lent);
	if (forma == 'd' || forma == 'i')
		_putnbr(va_arg(args, int), lent);
	if (forma == 'b')
		_putb2(va_arg(args, unsigned int), lent);
	if (forma == 'n')
		_putchar('\n',lent);
	if (forma == 'X' || forma == 'x')
		_putXx(va_arg(args, unsigned int), forma, lent);
	if (forma == 'u')
		_putnbr_u(va_arg(args, int), lent);
	/*if (forma == 'o')
		_putb8(va_arg(args, unsigned int ), lent);*/
}

/**
 * _printf - Description of the function.
 * @format : type of the varaible
 * @...: Description of the variadic arguments.
 *
 * Return: Description of the return value (if applicable).
 */
int _printf(const char *format, ...)
{
	int lent, i;
	va_list args;
	lent = 0;
	i = 0;
	va_start(args, format);
	while (format[i] && *format)
	{
		if (format[i] == '%')
		{
			i++;
			flage(args, format[i], &lent);
		}
		else
			_putchar(format[i], &lent);
		i++;
	}
		va_end(args);
		return (lent);
}
