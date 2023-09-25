#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Description of the function.
 * @head : the head of the list
 * @n : string to add to the list
 * Return: Description of the return value (if applicable).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
