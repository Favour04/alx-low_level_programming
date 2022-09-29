#include "main.h"

/**
 * factorial - factorial of n
 * @n: the number to find its factorial
 * Description: find the factorial of n
 * Return: factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}
	else
	{
	n = factorial(n - 1) * n;
	return (n);
	}

}
