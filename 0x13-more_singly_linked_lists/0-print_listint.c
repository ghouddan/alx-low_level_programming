#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Description of the function.
 * @h : separetor between numbers
 *
 * Return: Description of the return value (if applicable).
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
