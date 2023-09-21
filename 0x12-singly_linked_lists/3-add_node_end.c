#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Description of the function.
 * @head: head of the list
 * @str : string to add to the list
 *
 * Return: Description of the return value (if applicable).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	unsigned int lent = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
        
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[lent] != '\0')
		lent++;
        
	new->len = lent;
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
