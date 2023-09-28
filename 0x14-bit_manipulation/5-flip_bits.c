#include "main.h"

/**
 * set_bit - Description of the function.
 * @n : numbe to be flip
 * @m : number to flip to
 * Return: Description of the return value (if applicable).
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int count = 0;

	while (xorResult > 0)
	{
		count += xorResult & 1;
		xorResult >>= 1;
	}
	return (count);
}
