#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
