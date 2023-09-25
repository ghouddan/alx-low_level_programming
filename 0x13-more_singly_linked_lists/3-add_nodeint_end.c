#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Description of the function.
 * @head: head of the list
 * @n : string to add to the list
 *
 * Return: Description of the return value (if applicable).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
