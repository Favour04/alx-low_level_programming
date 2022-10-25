#include "lists.h"

/**
 * add_node - function to add new node at the begining of list
 * @head: pointer to pointer to struct list_t
 * @str: pointer to string used in main.c
 *
 * Return: Numbers of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->str = strdup(str);
	*head = new;

	return (*head);

}

