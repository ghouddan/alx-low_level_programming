#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function to print element of a list
 *
 * @h: list to print
 *
 * Return: the number of element
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ele = 0;

	while (h !=  NULL)
	{
		printf("%d\n", h->n);
		ele++;
		h = h->next;
	}
	return (ele);
}
