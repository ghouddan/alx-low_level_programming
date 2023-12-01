#include "hash_tables.h"

/**
* hash_djb2 - hash function (djb2 algorithm)
 * @String: string to hash
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *String)
{
	unsigned long int hash = 5381;
	int c;

	if (String == NULL)
		return (0);

	while ((c = *String++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
