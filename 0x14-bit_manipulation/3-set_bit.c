#include "main.h"

/**
 * set_bit - Description of the function.
 * @n : number to convert
 * @index : index of bit
 * Return: Description of the return value (if applicable).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
