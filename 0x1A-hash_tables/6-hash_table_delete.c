#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @hash_table: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *hash_table)
{
	hash_table_t *head = hash_table;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < hash_table->size; i++)
	{
		if (hash_table->array[i] != NULL)
		{
			node = hash_table->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
