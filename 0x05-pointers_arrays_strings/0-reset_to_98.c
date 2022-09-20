#include "main.h"

/**
 * reset_to_98 - pointer to reset int to 98
 *
 * Return: 0 (success)
*/

int reset_to_98(void)
{
	int i;
	int *id;
	
	id = &i;
	i = 12;
	*id = 98;

	putchar(i);
	putchar('\n');

	return (0);
}
