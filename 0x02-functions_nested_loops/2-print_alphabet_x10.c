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
	
	while (i < 10)
	{

		for (c = 97; c < 123; c++)
		{
			_putchar(c);
			c++;
			_putchar('\n');
		}
	}


}
