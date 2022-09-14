#include "main.h"

/**
 * _islower - check numbers casing
 *
 * @c: var name
 * Return: Always 0 success
*/
int _islower(int c)
{
	/* declare local variable */

	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	}

	else
	{
		_putchar(0);
	}

	_putchar('\n');

	return (0);
}
