#include "lists.h"
/**
 * free_listint- Description of the function.
 * @head: head of the list
 *
 * Return: Description of the return value (if applicable).
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

