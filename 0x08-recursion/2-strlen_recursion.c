#include "main.h"

/**
 * _strlen_recursion - count lenght of string
 * @s: lenght of string
 * Return void
*/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
		return (1);
	}
	else
		return (_strlen_recursion(&s[1]) + 1);
}
