#include "main.h"

/**
 * print alphabets - entry point
 *
 * description - print alphabets in lower case
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
