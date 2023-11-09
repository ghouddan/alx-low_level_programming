#include "lists.h"

/**
 * dlistint_len - function to print the lent of list
 *
 * @h: list
 *
 * Return: lent of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		++number;
		h = h->next;
	}
	return (number);
}

