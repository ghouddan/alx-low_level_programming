#include "lists.h"

/**
 * add_dnodeint - function to add a node at the head
 *
 * @head: head of the list
 * @n: data to add
 *
 * Return: add of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new  = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}


