#include "main.h"
/**
 * _printf - Description of the function.
 * @nb : number to convert 
 * @lent : traker of output
 * Return: Description of the return value (if applicable).
 */
void _putb2( int nb, int *lent)
{
	int i = 0, j;
	if (nb == 0)
	{
		_putchar('0', lent);
		return;
	}
	while ((1 << i) <= nb)
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		if (nb & (1 << j))
			_putchar('1',lent);
		else
			_putchar('0', lent);
	}
}
			
