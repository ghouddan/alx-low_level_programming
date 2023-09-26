#include "lists.h"
/**
 * insert_node_at_index- Description of the function.
 * @head: head of the list
 * @idx : where to add the new node
 * @n : data
 * Return: Description of the return value (if applicable).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *previous;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	previous = *head;
	while (previous)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = previous->next;
			previous->next = new;
			return (new);
		}
		i++;
		previous = previous->next;
	}
	return (NULL);
}

