#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Description of the function.
 * @h : separetor between numbers
 *
 * Return: Description of the return value (if applicable).
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}

