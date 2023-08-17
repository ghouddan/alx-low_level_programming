#include "main.h"
/**
 * print_numbers - writes the character c to std
 * Return: On success 1.
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

