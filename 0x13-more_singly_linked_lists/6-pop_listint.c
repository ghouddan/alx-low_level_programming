#include "lists.h"
/**
 * pop_listint- Description of the function.
 * @head: head of the list
 *
 * Return: Description of the return value (if applicable).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next;

	if (!*head)
		return (0);
	data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (data);
}
