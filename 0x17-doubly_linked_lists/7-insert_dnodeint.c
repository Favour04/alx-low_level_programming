#include "lists.h"
/**
 * negative - add length of list with negative number
 * @cur: list
 * Return: sum
 */
int negative(dlistint_t *cur)
{
	unsigned int j;

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
	unsigned int i = 0;
	dlistint_t *current = *h, *cur, *new;

	if ((int) idx < 0)
	{
		i = negative(*h);
		idx += i;
	}
	i = 0;
	if (*h == NULL || idx == 0)
	{
		new = (add_dnodeint(&current, n));
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (i == (idx - 1))
		{
			cur = current;
		}
		if (i == idx)
		{
			new = add_dnodeint(&current, n);
			new->prev = cur;
			cur->next = new;
			return (new);
		}
		else if (current->next == NULL && (int) idx == negative(*h))
		{
			new = add_dnodeint_end(&current, n);
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
