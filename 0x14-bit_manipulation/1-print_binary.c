#include "main.h"

/**
 * print_binary - Description of the function.
 * @n : number to convert
 *
 * Return: Description of the return value (if applicable).
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');

}