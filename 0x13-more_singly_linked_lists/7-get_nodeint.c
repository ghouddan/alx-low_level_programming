#include "lists.h"
/**
 * get_nodeint_at_index- Description of the function.
 * @head: head of the list
 * @index : index of the node
 *
 * Return: Description of the return value (if applicable).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}

