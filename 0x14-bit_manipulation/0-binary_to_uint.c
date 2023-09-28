#include "main.h"
/**
 * binary_to_uint- Description of the function.
 * @b: the binary number
 *
 * Return: Description of the return value (if applicable).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	b--;

	while (*b != '\0')
	{
		sum += (*b - '0') * (1 << j);
		j++;
		b--;
	}

	return (sum);
}
