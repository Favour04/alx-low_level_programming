#include "lists.h"

/**
 * sum_dlistint - funtion to return sum of lists
 * @head: pointer to head of list
 * Return: the sum of list
 */
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
