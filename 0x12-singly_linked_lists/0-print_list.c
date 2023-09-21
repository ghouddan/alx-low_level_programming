#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Description of the function.
 * @h : separetor between numbers
 *
 * Return: Description of the return value (if applicable).
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)

			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}


