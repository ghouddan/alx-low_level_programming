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

	if (!*head)
		return;
	while (*head)
	{
		current = *head;
		*head  = (*head)->next;
		free(current);
	}
	*head = NULL;
}
