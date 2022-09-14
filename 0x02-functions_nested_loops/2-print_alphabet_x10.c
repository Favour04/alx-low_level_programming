#include "main.h"

/**
* print_alphabet_x10 - ten times lower case
*
* c: alpha a
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	int c;
	int i = 0;

	while (i < 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
