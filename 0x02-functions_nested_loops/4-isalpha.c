#include "main.h"

/**
 * _isalpha - check numbers casing
 *
 * @c: var name
 * Return: Always 0 success
*/
int _isalpha(int c)
{
	/* declare local variable */

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}

	else
	{
		return (0);

	}

	_putchar('\n');

}
