#include <stdlib.h>
#include "lists.h"

/**
 * nodeINdex - returns the index of a node
 * @head:  head of the list
 * @index: index of the node to return
 *
 * Return: address of the nth node, or NULL if the node doesn't exist
 */
dlistint_t *nodeINdex(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h:  head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = nodeINdex(*h, idx - 1);
	if (!tmp)
		return (NULL);

	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
