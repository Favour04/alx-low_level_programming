#include "lists.h"
/**
 * negative - add length of list with negative number
 * @cur: list
 * Return: sum
 */
int negative(dlistint_t *cur)
{
	int j;
	j = 0;

	while (cur != NULL)
	{
		cur = cur->next;
		j++;
	}
	return (j);
}
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
	dlistint_t *current = *h, *cur, *new;

	if ((int) idx < 0)
	{

		i = negative(*h);
		idx += i;
	}
	i = negative(*h);
	if (idx > i)
	{
		return (NULL);
	}
	i = 0;
	while (current != NULL)
	{
		if (i == (idx - 1) && i != 0)
		{
			cur = current;
		}
		if (i == idx)
		{
			new = add_dnodeint(&current, n);
			if (i == 0)
				*h = new;
			new->prev = cur;
			cur->next = new;
			return (new);
		}
		else if (current->next == NULL)
		{
			new = add_dnodeint_end(&current, n);
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
