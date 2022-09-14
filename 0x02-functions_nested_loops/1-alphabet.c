#include "main.h"

/**
 * main - entry point
 *
 * description - print alphabets in lower case
 * Return: 0 (Success)
*/
void print_alphabet(void);
{
	int c;

	for (c = 61; c < 123; c++)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
