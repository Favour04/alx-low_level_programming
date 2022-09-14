#include "main.h"

/**
 * print_alphabet - print alphabet a to z
 *
 * c: the character to point
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}

	_putchar('\n');
	return;

}
