#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @hash_table: hash table to look into
 * @key: key to look for
 * Return: value associated with the key
 */
char *hash_table_get(const hash_table_t *hash_table, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (hash_table == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, hash_table->size);
	temp = hash_table->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
