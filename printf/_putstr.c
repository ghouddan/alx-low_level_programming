#include "main.h"
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putstr(char *forma, int *lent)
{
	int i = 0;
	if (forma == NULL)
	{
		_putstr("(NULL)", lent);
	}
	while (forma[i] && *forma)
	{
		_putchar(forma[i], lent);
		i++;
	}
}
