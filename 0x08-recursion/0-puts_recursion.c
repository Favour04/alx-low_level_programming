#include "main.h"

/*
 * _puts_recursion - print a sting
 * Description: print string using recursion
 * @s: string to be printed to std
 * Return: void
*/

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);

	}
	else
		_putchar('\n');

}

