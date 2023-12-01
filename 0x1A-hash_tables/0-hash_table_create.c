#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes
 *
 * Return: pointer to created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(hash_table);
		return (NULL);
	}

	for (; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
