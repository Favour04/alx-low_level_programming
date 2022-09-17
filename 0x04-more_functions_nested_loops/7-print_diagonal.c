#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: lenght of line
 * Return: 0
*/
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n < 1)
		_putchar('\n');
}
