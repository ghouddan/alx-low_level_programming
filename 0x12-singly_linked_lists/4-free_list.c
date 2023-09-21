#include "lists.h"
#include <stdlib.h>
/**
 * free_list- Description of the function.
 * @head: head of the list
 *
 * Return: Description of the return value (if applicable).
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->next);
		free(current);
		current = next;
	}
}
