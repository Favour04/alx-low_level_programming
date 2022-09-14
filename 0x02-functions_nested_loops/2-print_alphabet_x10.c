#include "main.h"

/**
* print_alphabet_x10 - ten times lower case
*
* c: alpha a
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 9)
	{
		for (c = 61; c < 123; c++)
		{
			_putchar(c);
			_putchar('\n')
		}

	}


}
