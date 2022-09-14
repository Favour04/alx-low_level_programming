#include "main.h"

/**
 * print_sign - check numbers casing
 *
 * @n: var name
 * Return: Always 0 success
*/
int print_sign(int n)
{
	/* declare local variable */

	if (n > 0)
	{
		_putchar('+');
		return (1);

	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}

	else 
	{
		_putchar('-');
		return (-1);
	}


	_putchar('\n');

}
