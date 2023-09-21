#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Description of the function.
 * @head : the head of the list
 * @str : string to add to the list
 * Return: Description of the return value (if applicable).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}

