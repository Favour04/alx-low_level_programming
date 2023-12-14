#include "main.h"
/**
 * print_binary.c - print a digit in binary
 * @n - digit to print
 *
 * Return: 1 if sucessful 0 if failed
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit;
	int startprint = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit == 1)
			startprint = 1;

		if (startprint == 1)
			_putchar(bit + '0');

	}
	if (!startprint)
		_putchar('0');
}
