#include "main.h"

/**
 * binary_to_unit - convert binary to unit
 * @b: binary to convert
 * Return: unit
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int num;

	n = strlen(b) - 1;
	num = 0;

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
