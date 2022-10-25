#include "lists.h"

/**
 * print_list - print all element in list_t
 * @h: pointer to the struct
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nill)\n");
	}

	printf("[%u] %s\n", h->len, h->str);
	printf("[%u] %s\n", h->next->len, h->next->str);
	return (2);
}
