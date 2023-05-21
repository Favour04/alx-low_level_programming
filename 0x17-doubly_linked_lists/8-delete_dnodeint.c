#include "lists.h"

/**
 * negative - add a given nagavite number to number len of given list
 * @cur: pointer to head of list
 * @n: negative number
 * Return: the sum
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
 * delete_dnodeint_at_index - delete a node
 * @head: pointer to list head
 * @index: specified node number
 * Return: 1 if succesfull an 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *point1, *point2;
	unsigned int i = 0;	

	if (index == 0)
	{
		point1 = current->next;
		*head = point1;
		free(current);
		return (1);
	}
	if ((int) index < 0)
		index = negative(*head, index);

	while (current != NULL)
	{
		if ((index - 1) == i)
		{
			point1 = current;
		}
		if (index == i) 
		{
			point2 = current->next;
			free(current);
			point1->next = point2;
			point2->prev = point1;
			return(1);
		}
	
		else if (current->next == NULL)
		{
			free(current);
		}

		current = current->next;
		i++;
	}

	return (-1);
}
