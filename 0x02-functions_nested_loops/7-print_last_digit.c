#include "main.h"

/**
 * print_last_digit - Code to get the last digit of a number n
 * @n: n is the main number
 * Return: 0 (Success)
*/
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;
		_putchar(i + '0');
		return (n);
	
	}
	return (0);
}
