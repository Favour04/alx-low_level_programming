#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string to count
 * @accept: strimg to compare
 * Return: bytes of coresponding char
 */

unsigned int _strspn(char *s, char *accept)
{
	char f;
	int i = 0;
	char *c;

	c = s;

	while (*accept != '\0')
	{
		s = c;
		while (*s != ',')
		{
			f = *accept;

			if (*s == f)
			{
				i++;
			}

			s++;
		}
		accept++;
	}

	return (i);
}
