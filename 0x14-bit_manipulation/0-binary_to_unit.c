#include "main.h"

/**
 * binary_to_unit - convert binary to unit
 * @c: binary to convert
 * Return: unit
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int i;
	unsigned int value;
	unsigned int power;
	unsigned int sum;
	const char *s;
	
	s = b;
	/*100*/
	
	while (*b != '\0')
	{
		b++;
	}
	b--;
	
	power = 0;
	sum = 0;
	while (b >= s)
	{	
		if (*b != '0' && *b != '1')
		{
			return(0);
		}

		i = *b - '0';
		value = i * (1 << power);
		sum += value;
		b--;
		power++;
	}
	return (sum);
}
