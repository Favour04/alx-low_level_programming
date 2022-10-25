#include "lists.h"

/**
 * list_len - finb number of nodes in list_t
 * @h: pointer to the struct
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
