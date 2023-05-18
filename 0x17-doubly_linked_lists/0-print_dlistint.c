#include "list.h"
/**
 * print_dlistint - function to print data in double linked list
 * @h: pointer to head of list
 * Return: legnth of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	int i;

	current = (dlistint_t *) h;
	i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);

}
