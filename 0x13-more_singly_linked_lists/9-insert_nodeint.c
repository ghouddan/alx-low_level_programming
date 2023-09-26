#include "lists.h"
/**
 * insert_nodeint_at_index- Description of the function.
 * @head: head of the list
 * @idx : where to add the new node
 * @n : data
 * Return: Description of the return value (if applicable).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *current, *previous;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	current = *head;
	previous = NULL;

	while (current && i < idx)
	{
		i++;
		previous = current;
		current = current->next;
	}

	if (i < idx)
	{
		free(new);
		return (NULL);
	}

	previous->next = new;
	new->next = current;

	return (new);
}

