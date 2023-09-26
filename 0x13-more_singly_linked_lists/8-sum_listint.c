#include "lists.h"
/**
 * sum_listint- Description of the function.
 * @head: head of the list
 *
 * Return: Description of the return value (if applicable).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	if (sum != 0)
		return (sum);
	else
		return (0);
}
