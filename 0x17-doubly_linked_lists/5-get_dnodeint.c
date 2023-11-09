#include "lists.h"

/**
 * get_dnodeint_at_index - returns index linked list
 * @head:  head of the list
 * @index: index of the node to return
 *
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}
