#include "lists.h"

/**
 * add_dnodeint - function to add node to double-linke
 * list
 *
 * @head: pointer to head of list
 * @n: value to store in node
 * Return: adress of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *headptr;
	dlistint_t *new;

	headptr = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		headptr->prev = new;
		new->next = headptr;
		new->prev = NULL;
		new->n = n;
		*head = new;

	}

	return (new);

}
