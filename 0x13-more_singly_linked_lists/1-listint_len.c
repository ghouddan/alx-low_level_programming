#include "lists.h"
/**
 * listint_len - Description of the function.
 * @h : separetor between numbers
 *
 * Return: Description of the return value (if applicable).
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
