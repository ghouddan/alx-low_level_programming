#include "main.h"
/**
 * _putXx - Description of the function.
 * @nb : number to convert;
 * @x : FF or ff
 * @...: Description of the variadic arguments.
 *
 * Return: Description of the return value (if applicable).
 */
void _putXx(unsigned int n, char x, int *lent)
{
	unsigned int baseX;
	char *base;
	baseX = 16;
	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < baseX)
		_putchar(base[n % baseX], lent);
	else
	{
		_putXx(n / baseX, x, lent);
		_putXx(n % baseX, x, lent);
	}
}

