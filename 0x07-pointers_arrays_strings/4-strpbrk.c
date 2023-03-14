#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s -
 * of any of the bytes in the string accept
 * @s: char to locate
 * @accept: strimg to compare
 * Return: pointer to the byte in s that matches one of the -
 *bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *c;
	char *d;

	if (s == NULL)
	{
		return (NULL);
	}

	d = accept;
	while (*s != '\0')
	{
		accept = d;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				c = s;
				return (c);
			}
			accept++;
		}
		s++;
	}

	return (NULL);
}
