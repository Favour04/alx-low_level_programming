#include "lists.h"

/**
 * get_dnodeint_at_index - function to get a specified node
 * @head: pointer to head of node
 * @index: specified node
 * Return: pointer to the specified node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int j;
	dlistint_t *cur;

	if ((int) index < 0)
	{
		j = 0;
		cur = head;
		while (cur != NULL)
		{
			cur = cur->next;
			j++;
		}
		index += j;
	}

	i = 0;
	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}

		head = head->next;
		i++;
	}
	return (head);
}
