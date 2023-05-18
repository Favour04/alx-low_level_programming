#include "lists.h"
/**
 * dlistint_len - function to count lisi len
 * @h: pointer to head of list
 * Return: legnth of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	int i;

	current = (dlistint_t *) h;
	i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	return (i);

}
