#include "lists.h"

/**
 * add_node_end - function to add new node at the begining of list
 * @head: pointer to pointer to struct list_t
 * @str: pointer to string used in main.c
 *
 * Return: Numbers of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
