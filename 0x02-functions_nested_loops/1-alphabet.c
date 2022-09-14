#include "main.h"

/**
 * main - entry point
 *
 * description - print alphabets in lower case
 * Return: 0
 */
void print_alphabet(void);
{
	int c;

	for (c = 'a'; c < 'z'; c++)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
