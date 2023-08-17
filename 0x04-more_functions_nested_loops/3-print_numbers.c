#include "main.h"
/**
 * print_numbers - writes the character c to stdout
 * @i: number to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
int i;
i = 0;
while(i < 10)
{
_putchar("%d",i);
i++;
}
putchar('\n');
}

