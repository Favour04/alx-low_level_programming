#include "main.h"

/**
 * Print ten  timees lower case
 *
 * Return: 0 (Success)
*/
void print_alphabet_x10(void);
{
	int i = 0;
	int c;

	while (i < 9)
	{	
		for (c = 61; c < 123; c++)
		{
			_putchar(c);
			c++;
		}
	i++;

	}
	return (0);
}
