#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print num
 * @n: intiger
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n == 0)
	{
		printf("%d, ", n);
	}

	if (n == 98)
		printf("%d, ", n);

		printf("\n");
}
