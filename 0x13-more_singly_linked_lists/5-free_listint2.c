#include "lists.h"
/**
 * free_listint2- Description of the function.
 * @head: head of the list
 *
 * Return: Description of the return value (if applicable).
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (!*head)
		return;
	current = *head;
	while (current)
	{
		next  = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
