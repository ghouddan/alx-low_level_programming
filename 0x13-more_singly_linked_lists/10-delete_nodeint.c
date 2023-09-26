#include "lists.h"
/**
 * delete_nodeint_at_index- Description of the function.
 * @head: head of the list
 * @index : index of node
 * Return: Description of the return value (if applicable).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *previous;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		i++;
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
