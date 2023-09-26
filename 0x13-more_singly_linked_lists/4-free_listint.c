#include "lists.h"
/**
 * free_list- Description of the function.
 * @head: head of the list
 *
 * Return: Description of the return value (if applicable).
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (head)
	{
		next = current->next;
		free(cuurent->n);
		free(current);
		current = next;
	}
}

