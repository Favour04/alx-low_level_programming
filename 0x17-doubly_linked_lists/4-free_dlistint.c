#include "lists.h"
/**
 * free_dlistint - function to free list
 * @head: pointer to list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
