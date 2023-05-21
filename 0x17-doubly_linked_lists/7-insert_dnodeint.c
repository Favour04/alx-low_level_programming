#include "lists.h"
/**
 * negative - add length of list with negative number
 * @cur: list
 * @i: negative number
 * Return: sum
 */
int negative(dlistint_t *cur, unsigned int i)
{
	int j;

	j = 0;

	while (cur != NULL)
	{
		cur = cur->next;
		j++;
	}
	i += j;
	return (i);
}

/**
 * zero - hadle first function when the value of idx is 0
 * @temp: pointer to head
 * @n: data
 * Return: pointer to new node
 */
dlistint_t *zero(dlistint_t *temp, int n)
{
	dlistint_t *new;

	new = add_dnodeint(&temp, n);
	return (new);
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
		idx = negative(*h, idx);
	}

	if ((int) idx == 0)
	{
		new = zero(*h, n);
		*h = new;
	}

	while (current != NULL)
	{
		if (i == (idx - 1))
		{
			cur = current;
		}

		if (i == (idx + 1))
		{
			new = add_dnodeint(&current, n);
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
