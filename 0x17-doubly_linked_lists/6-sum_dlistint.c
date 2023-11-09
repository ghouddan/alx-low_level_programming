#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a  list
 * @head:  head of the list
 *
 * Return: sum of all the data in  list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
