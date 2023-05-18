#include "lists.h"
/**
 * add_dnodeint_end - function to add node to end of doubled lists
 * @head: pointer to head
 * @n: data
 * Return: on sucsess pointer to node
 * on error NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	current = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			if (current->next == NULL)
			{
				current->next = new;
				new->prev = current;
				new->next = NULL;
				new->n = n;

				break;
			}

			current = current->next;
		}
	}
	return (new);
}
