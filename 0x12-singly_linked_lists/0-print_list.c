#include "lists.h"

/**
 * print_list - print all element in list_t
 * @h: pointer to the struct
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;
	num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}
