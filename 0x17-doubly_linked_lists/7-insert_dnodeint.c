#include "lists.h"

/**
 * insert_dnodeint_at_index - function to add node to a specified index
 * @h: pointer to head of node
 * @idx: specified index
 * @n: int data
 * Return: pointer to the specified node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current;
	dlistint_t *cur;
	dlistint_t *new;
	dlistint_t *pptr;

	current = *h;
	i = 0;

	while (current != NULL)
	{
		if (i == (idx - 1))
		{
			cur = current;
		}
		if (i == (idx + 1))
		{
			pptr = current;
			new = add_dnodeint(&pptr, n);
			new->prev = cur;
			cur->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
