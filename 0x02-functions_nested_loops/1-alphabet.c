#include "main.h"

/**
* Alphabets - Entry point
*
* Description - print letters in lower case
* Return: 0 (Success)
*/
void print_alphabet(void);
{
	int c;

	for (c = 61; c < 123; c++);
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
