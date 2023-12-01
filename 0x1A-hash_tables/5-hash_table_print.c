#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @hash_table: hash table
 */
void hash_table_print(const hash_table_t *hash_table)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	char *comma = "";

	if (!hash_table || !hash_table->array)
		return;

	putchar('{');
	while (idx < hash_table->size)
	{
		node = ((hash_table->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		idx++;
	}
	puts("}");
}
