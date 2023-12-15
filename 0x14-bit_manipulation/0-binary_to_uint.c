#include "main.h"
/**
 * _strlen - return len
 * @c: char to count
 * Return: len
 */
int _strlen(const char *c)
{
	int i = 0;

	if (c == NULL)
		return (0);

	while (*c != '\0')
	{
		c++;
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - convert binary to unit
 * @b: binary to convert
 * Return: unit
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int num;

	n = _strlen(b) - 1;
	num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		num += (*b - '0') << n;
		b++;
		n--;
	}

	return (num);
}
