#include "main.h"

/**
 * get_bit - Description of the function.
 * @n : number to convert
 * @index : index of bit
 * Return: Description of the return value (if applicable).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
