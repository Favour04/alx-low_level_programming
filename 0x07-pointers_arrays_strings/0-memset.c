#include "main.h"

/**
 * *_memset - function to return pointer to *s
 * @s: string value
 * @b: char to copy memory
 * @n: the num of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}

	return (s);
}
